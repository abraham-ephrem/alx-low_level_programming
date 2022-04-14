#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	char *string;

	va_start(ap, n);
	string = va_arg(ap, char*);
	if (string == NULL)
		printf("%s", "(nil)");
	else
		printf("%s", string);
	if (separator != NULL)
	{
		for (i = 0; i < (int)n - 1; i++)
		{
			string = va_arg(ap, char*);
			if (string == NULL)
				string = "(nil)";
			printf("%s%s", separator, string);
		}
	}
	else
	{
		for (i = 0; i < (int)n - 1; i++)
		{
			string = va_arg(ap, char*);
			if (string == NULL)
				string = "(nil)";
			printf("%s", string);
		}
	}
	printf("\n");
}
