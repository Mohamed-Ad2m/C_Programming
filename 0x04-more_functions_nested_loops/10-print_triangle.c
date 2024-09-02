#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by newline
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (j > i)
				_putchar(' ');
			j++;
		}
		k = 0;
		while (k <= i)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
}
