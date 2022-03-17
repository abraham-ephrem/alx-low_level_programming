#include "main.h"
#include <stdlib.h>
/**
 * print_number - prints an integer
 * @n: the integer
 * Return: 0
 */
void print_number(int n)
{
	int num;

	if (n < 0)
		_putchar('-');
	num = abs(n);
	if (num <= 9 || num == 0)
	{
		_putchar(num + '0');
	}
	else if (num >= 10 && num < 100)
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else if (num >= 100 && num < 1000)
	{
		_putchar((num / 100) + '0');
		_putchar((num / 10 % 10) + '0');
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar((num / 1000) + '0');
		_putchar((num / 100 % 10) + '0');
		_putchar((num / 10 % 10) + '0');
		_putchar((num % 10) + '0');
	}
}
