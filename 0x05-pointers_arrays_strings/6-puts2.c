#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character in a string
 * @str: the address of the first character in the string
 * Return: void
 */
void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
