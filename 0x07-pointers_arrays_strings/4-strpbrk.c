#include "main.h"
/**
 * _strpbrk - returns the first occurence of a character in accept
 * @s: the string to be searched
 * @accept: the collection of characters
 * Return: the address of the a character in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	char *result;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				result = &s[i];
				goto end;
			}
			j++;
		}
		i++;
		j = 0;
	}
end:
	return (result);
}

