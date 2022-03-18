#include "main.h"
#include <stdlib.h>
/**
 * print_numbers_100k - prints numbers upto 10ok
 * @num: the number
 * Return void
 */
void print_numbers_100k(int num)
{
	_putchar((num / 10000) + '0');
	_putchar((num / 1000 % 10) + '0');
	_putchar((num / 100 % 10) + '0');
	_putchar((num / 10 % 10) + '0');
	_putchar((num % 10) + '0');
}
/**
 * print_numbers_1M - prints an integer
 * @num: the integer
 * Return: 0
 */
void print_numbers_1M(int num)
{
	_putchar((num / 100000) + '0');
	_putchar((num / 10000 % 10) + '0');
	_putchar((num / 1000 % 10) + '0');
	_putchar((num / 100 % 10) + '0');
	_putchar((num / 10 % 10) + '0');
	_putchar((num % 10) + '0');
}
/**
 * print_numbers_10M - prints numbers upto 100M
 * @num: the number
 * Return: void
 */
void print_numbers_10M(int num)
{
	if (num >= 10000000)
	{
		_putchar((num / 10000000) + '0');
		_putchar((num / 1000000 % 10) + '0');
		_putchar((num / 100000 % 10) + '0');
		_putchar((num / 10000 % 10) + '0');
		_putchar((num / 1000 % 10) + '0');
		_putchar((num / 100 % 10) + '0');
		_putchar((num / 10 % 10) + '0');
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar((num / 1000000) + '0');
		_putchar((num / 100000 % 10) + '0');
		_putchar((num / 10000 % 10) + '0');
		_putchar((num / 1000 % 10) + '0');
		_putchar((num / 100 % 10) + '0');
		_putchar((num / 10 % 10) + '0');
		_putchar((num % 10) + '0');
	}
}
/**
 * print_numbers_1B - prints numbers over 1B
 * @num: the number
 * Return void
 */
void print_numbers_1B(int num)
{
	if (num >= 1000000000)
	{
		_putchar((num / 1000000000) + '0');
		_putchar((num / 100000000 % 10) + '0');
		_putchar((num / 10000000 % 10) + '0');
		_putchar((num / 1000000 % 10) + '0');
		_putchar((num / 100000 % 10) + '0');
		_putchar((num / 10000 % 10) + '0');
		_putchar((num / 1000 % 10) + '0');
		_putchar((num / 100 % 10) + '0');
		_putchar((num / 10 % 10) + '0');
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar((num / 100000000) + '0');
		_putchar((num / 10000000 % 10) + '0');
		_putchar((num / 1000000 % 10) + '0');
		_putchar((num / 100000 % 10) + '0');
		_putchar((num / 10000 % 10) + '0');
		_putchar((num / 1000 % 10) + '0');
		_putchar((num / 100 % 10) + '0');
		_putchar((num / 10 % 10) + '0');
		_putchar((num % 10) + '0');
	}
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
		_putchar(num + '0');
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
		print_numbers_100k(num);
	else if (num >= 100000 && num < 1000000)
		print_numbers_1M(num);
	else if (num >= 1000000 && num < 10000000)
		print_numbers_10M(num);
	else if (num >= 10000000 && num < 100000000)
		print_numbers_10M(num);
	else if (num >= 100000000 && num < 1000000000)
		print_numbers_1B(num);
	else
		print_numbers_1B(num);
}
