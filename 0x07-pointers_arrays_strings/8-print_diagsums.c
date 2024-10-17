#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *					of a square matrix of integers.
 *
 * @a: Pointer to 2D array
 * @size: Number of elements (colum=rows=size)
 */
void print_diagsums(int *a, int size)
{
	int		i;
	int		sum1;
	int		sum2;

	i = sum1 = sum2 = 0;
	while (i < size)
	{
		sum1 += a[(size * i) + i++];
		sum2 += a[(size * i) - i];
	}

	printf("%d, %d\n", sum1, sum2);
}
