#include <stdio.h>
/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	long long n1 = 1;
	long long n2 = 2;
	long long current_fib;
	int i;

	printf("%lld, %lld, ", n1, n2);
	for (i = 1; i <= 48; i++)
	{
		current_fib = n1 + n2;
		printf("%lld, ", (current_fib));
		n1 = n2;
		n2 = current_fib;
	}

	return (0);
}
