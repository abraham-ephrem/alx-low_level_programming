#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if a character is small letter
 * @c: The character to be checked
 *
 * Return: 1 if the character is lower case or 0 otherwise
 */
int _islower(int c)
{
	int result;

	if (islower(c) == 0)
		result = 0;
	else
		result = 1;
	return (result);
}
