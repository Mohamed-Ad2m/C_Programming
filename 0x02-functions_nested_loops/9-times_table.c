#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int		i;
	int		j;
	int		r;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (i * j <= 9)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(i * j + '0');
			}
			else
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
