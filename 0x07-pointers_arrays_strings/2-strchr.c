#include "main.h"
/**
 * _strchr - returns the address of the first occurence of c in s
 * @s: the string
 * @c: the character
 * Return: the address of c in s
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *result;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			result = &s[i];
			break;
		}
		i++;
	}
	return (result);
}
