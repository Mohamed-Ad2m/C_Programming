#include "main.h"

/**
 * print_square - Prints a square, followed by newline
 * @size: is the size of the square
 */
void print_square(int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
