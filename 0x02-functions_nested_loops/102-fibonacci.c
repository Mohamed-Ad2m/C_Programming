#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *		  followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	long long int	first, second, next;
	int		n = 50;
	int		i;

	first = 0;
	i = second = next = 1;
	while (++i < n - 1)
	{
		next = second + first;
		first = second;
		second = next;
		printf("%lld", next);
		printf(i < n - 2 ? ", " : "\n");
	}
	return (0);
}
