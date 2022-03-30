#include "main.h"
/**
 * _puts_recursion - prints a string recursively
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*(s));
	if (*(s + 1) != '\0')
		_puts_recursion(s + 1);
}
