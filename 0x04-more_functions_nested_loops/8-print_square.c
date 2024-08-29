#include "main.h"

/**
 * print_square - Prints a square, followed by newline
 * @size: The number of times the character # should be printed
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
