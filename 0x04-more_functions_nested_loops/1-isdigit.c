#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for digits
 * @c: the character to be checked
 * Return: 1 if c is a digit
 *         0 if c is not a digit
 */

int _isdigit(int c)
{
	int result;

	if (isdigit(c) == 0)
		result = 0;
	else
		result = 1;

	return (result);
}
