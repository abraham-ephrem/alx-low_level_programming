#include "main.h"
/**
 * print_triangle - prints a triangle using #
 * @size: specifies the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (j <= i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
