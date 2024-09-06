#include <stdio.h>

/**
 * print_array -  Prints @n elements of an array of integers
 * @a: A pointer to the array
 * @n: The number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
