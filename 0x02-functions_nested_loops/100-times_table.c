#include <unistd.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: The number
 */
void print_times_table(int n)
{
	int		i;
	int		j;

	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			if (i * j <= 9)
			{
				if (j > 0)
					write(1, ",  ", 3);
				_putchar(i * j + '0');
			}
			else
			{
				if (j > 0)
					write(1, ", ", 2);
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
