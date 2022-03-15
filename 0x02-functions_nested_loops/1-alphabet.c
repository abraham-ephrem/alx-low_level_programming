#include "main.h"
/**
 * main - The main function
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();

	return (0);
}
/**
 * print_alphabet - prints the alphabets
 *
 * Return: void
 */
print_alphabet()
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');

}
