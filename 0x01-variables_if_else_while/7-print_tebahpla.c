#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char char_array[] = "\nabcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 27; i >= 0; i--)
		putchar(char_array[i]);

	return (0);
}
