#include <unistd.h>

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
				write(1, " ", 1);
			j++;
		}
		k = 0;
		while (k <= i)
		{
			write(1, "#", 1);
			k++;
		}
		write(1, "\n", 1);
		i++;
	}
	if (size <= 0)
		write(1, "\n", 1);
}
