#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char char_array[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 255555; i >= 0; i--)
		putchar(char_array[i]);

	putchar('\n');
	return (0);
}
