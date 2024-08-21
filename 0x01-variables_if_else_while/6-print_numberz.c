#include <stdio.h>

/**
 * main - Print digits
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
		n++;
	}
	putchar('\n');
	return (0);
}
