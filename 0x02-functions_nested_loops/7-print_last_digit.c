#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: The number
 *
 * Return: The last digit of @num
 */
int print_last_digit(int num)
{
	int result;

	result = num % 10;
	_putchar(result + '0');
	return (result);
}

