#include <unistd.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
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
