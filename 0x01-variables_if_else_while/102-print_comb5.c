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
	int k = 0;
	int l = 1;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			while (k < 10)
			{
				while (l < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i == 9 && j == 8 && k == 9 && l == 9)
						break;
					putchar(',');
					putchar(' ');
					l++;
				}
				l = 0;
				k++;
			}
			l = j + 2;
			k = i;
		}
	}
	putchar('\n');

	return (0);
}
