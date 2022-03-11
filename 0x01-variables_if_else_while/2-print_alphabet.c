#include <stdio.h>
/**
 * main - prints the aphabets in small cases
 *
 * Return: 0
 */
int main(void)
{
	char char_array[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;
	for (i; i < 27; i++)
		putchar(char_array[i]);

	return (0);
}
