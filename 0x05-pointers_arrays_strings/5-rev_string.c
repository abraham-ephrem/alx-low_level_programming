#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string variable
 * @s: the address of the first character in the string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int length = strlen(s);
	char tmp[50];

	strcpy(tmp, s);
	for (i = 1; i <= length; i++)
	{
		*(s + (i - 1)) = *(tmp + (length - i));
	}
}
