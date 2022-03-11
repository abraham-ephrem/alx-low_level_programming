#include <stdio.h>
/**
 * main - prints the aphabets in small cases
 *
 * Return: 0
 */
int main(void)
{
	char char_array[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i;

	for (i = 0; i < 53; i++)
		putchar(char_array[i]);

	return (0);
}
