#include "main.h"
/**
 * swap_int - interchanges the values of two variables
 * @a: The first variable
 * @b: The second variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

