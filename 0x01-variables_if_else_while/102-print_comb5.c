#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l = 1;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				while (l < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
					l++;
				}
				l = 0;
			}
			l = j + 2;
		}
	}
	putchar('\n');

	return (0);
}
