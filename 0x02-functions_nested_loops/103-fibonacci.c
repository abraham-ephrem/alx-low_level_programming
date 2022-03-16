#include <stdio.h>
/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int current_fib;
	int i;
	int MAX = 4000000;
	unsigned long total = 2;

	for (i = 0; i <= 48; i++)
	{
		current_fib = n1 + n2;
		if (current_fib <= MAX)
		{
			if (current_fib % 2 == 0)
				total += current_fib;
		}
		else
			break;
		n1 = n2;
		n2 = current_fib;
	}
	printf("%lu\n", total);
	return (0);
}



