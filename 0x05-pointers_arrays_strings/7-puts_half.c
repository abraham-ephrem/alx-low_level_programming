#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half of a string
 * @str: the address of the first character of the string
 * Return: void
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int i;
	int n;

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
			_putchar(*(str + i));
	}
	else
	{
		n = (length - 1) / 2;
		for (i = n + 1; i < length; i++)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
