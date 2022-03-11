#include <stdio.c>
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
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; i < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				for (l = k + 1; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
