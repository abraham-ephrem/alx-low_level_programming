#include "main.h"
#include <stdlib.h>
/**
 * print_numbers_100000 - prints an integer
 * @n: the integer
 * Return: 0
 */
void print_numbers_100000(int n)
{
	_putchar((num / 100000) + '0');
	_putchar((num / 10000 % 10) + '0');
	_putchar((num / 1000 % 10) + '0');
	_putchar((num / 100 % 10) + '0');
	_putchar((num / 10 % 10) + '0');
	_putchar((num % 10) + '0');
}
/**
 * print_numbers_1000000 - prints numbers
 * @n: the number
 * Return: void
 */
void print_numbers_1000000(int n)
{
	_putchar((num / 1000000) + '0');
	_putchar((num / 100000 % 10) + '0');
	_putchar((num / 10000 % 10) + '0');
	_putchar((num / 1000 % 10) + '0');
	_putchar((num / 100 % 10) + '0');
	_putchar((num / 10 % 10) + '0');
	_putchar((num % 10) + '0');
}
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
	else if (num >= 1000 && num < 10000)
	{
		_putchar((num / 1000) + '0');
		_putchar((num / 100 % 10) + '0');
		_putchar((num / 10 % 10) + '0');
		_putchar((num % 10) + '0');
	}
	else if (num >= 10000 && num < 100000)
	{
		_putchar((num / 10000) + '0');
		_putchar((num / 1000 % 10) + '0');
		_putchar((num / 100 % 10) + '0');
		_putchar((num / 10 % 10) + '0');
		_putchar((num % 10) + '0');
	}
	else if (num >= 100000 && num < 1000000)
		print_numbers_100000(num);
	else
		print_numbers_1000000(num);
}
