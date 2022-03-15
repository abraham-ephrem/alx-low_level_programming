#include "main.h"
/**
 * jack_bauer - prints digital clock
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(':');
					putchar(k + '0');
					putchar(l + '0');
					putchar('\n');
				}
			}
		}
	}
}
