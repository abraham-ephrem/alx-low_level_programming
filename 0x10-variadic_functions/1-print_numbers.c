#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: the separator of the numbers
 * @n: the number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	printf("%d", va_arg(ap, int));
	if (separator != NULL)
	{
		for (i = 0; i < (int)n - 1; i++)
			printf("%s%d", separator, va_arg(ap, int));
		printf("\n");
	}
	else
	{
		for (i = 0; i < (int)n - 1; i++)
			printf("%d", va_arg(ap, int));
		printf("\n");
	}
	printf("\n");
	va_end(ap);
}
