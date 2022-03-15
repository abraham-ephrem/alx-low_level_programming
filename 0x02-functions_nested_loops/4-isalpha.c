#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabets
 * @c: The letter to be checked
 *
 * Return: 1 if the character is an alphabet or 0 otherwise
 */
int _isalpha(int c)
{
	int result;

	if (isalpha(c) == 0)
		result = 0;
	else
		result = 1;
	return (result);
}
