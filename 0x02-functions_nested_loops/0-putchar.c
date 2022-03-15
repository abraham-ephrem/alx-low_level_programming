#include "main.h"
/**
 * main - The main function
 *
 * Return: 0
 */
int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(string[i]);
	_putchar('\n');

	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
