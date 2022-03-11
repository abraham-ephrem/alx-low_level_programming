#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char hex[] = "0123456789abcdef\n";

	for (i = 0; i < 17; i++)
	{
		putchar(hex[i]);
	}

	return (0);
}
