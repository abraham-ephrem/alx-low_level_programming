#include <stdio.h>
/**
 * main - finds the largest prime factor of a number
 * Return: 0
 */
int main(void)
{
	int num;
	int max_factor;
	int i;

	num = 612852475143;
	max_factor = 0;
	while (num % 2 == 0)
	{
		num = num / 2;
	}

	for (i = 3; i <= num / 2; i = i + 2)
	{
		while (num % i == 0)
		{
			max_factor = i;
			num = num / i;
		}
	}
	if (num > 2)
	{
		if (max_factor < num)
			max_factor = num;
	}
	printf("%d\n", max_factor);

	return (0);
}
