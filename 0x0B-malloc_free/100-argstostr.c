#include "main.h"
#include <stdlib.h>
#include <string.h>
unsigned int strlength(int ac, char **av)
{
	int i;
	unsigned int length = 0;
	
	for (i = 0; i < ac; i++)
		length += strlen(av[i]);

	return (length);
}

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = -1;
	char *str;
	int size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = strlength(ac, av) + ac;
	str = malloc(sizeof(char) * (unsigned int)size);
	if (str == NULL)
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[++k] = av[i][j];
		}
		str[++k] = '\n';
	}

	return (str);
}







