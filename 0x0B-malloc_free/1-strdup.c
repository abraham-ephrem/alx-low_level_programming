#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a copy of str
 * @str: the input string
 * Return: a pointer to the copied string
 */
char *_strdup(char *str)
{
	char *new_string;

	if (str == NULL)
		return (NULL);
	new_string = malloc(sizeof(char) * ((strlen(str) + 1)));
	if (new_string == NULL)
		return (NULL);
	new_string = str;
	return (new_string);
}

