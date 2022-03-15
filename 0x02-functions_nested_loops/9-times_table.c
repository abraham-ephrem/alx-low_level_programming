#include "main.h"
/**
 * times_table - prints a 9x9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result == 0 && i == 0)
			{
				_putchar(result + '0');
				if (!(j == 9))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				
			}
			else if (result <= 9 && result != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
