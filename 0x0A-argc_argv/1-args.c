#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @ac: Arguments Count
 * @av: Arguments Vector
 *
 * Return: 0
 */
int		main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac - 1);
	return (0);
}
