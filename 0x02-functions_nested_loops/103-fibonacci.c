#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *		  terms not exceeding 4000000.
 *
 * Return: 0
 */
int main(void)
{
	long long int	first, second, next, sum;

	first = 0;
	second = next = 1;
	while (next < 4000000)
	{
		next = second + first;
		first = second;
		second = next;
		sum += (next % 2 == 0) ? next : 0;
	}
	printf("%lld\n", sum);
	return (0);
}
