#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int	main(void)
{
	int	n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + 48);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
