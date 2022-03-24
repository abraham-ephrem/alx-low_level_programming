#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * rot13 - implements a rot13 cypher
 * @str: the string to be cyphered
 * Return: the encrypted string
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
			(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm')
				|| (str[i] >= 'A' && str[i] <= 'M'))
				str[i] += 13;
			else
				str[i] -= 13;
			i++;
		}
		i++;
	}
	return (str);
}
