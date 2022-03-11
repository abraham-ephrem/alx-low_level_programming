#include <stdio.h>
/**
 * main - prints the aphabets in small cases except e and q
 *
 * Return: 0
 */
int main(void)
{
	char char_array[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		if (char_array[i] == 'e' || char_array[i] == 'q')
			continue;
		putchar(char_array[i]);
	}

	return (0);
}
