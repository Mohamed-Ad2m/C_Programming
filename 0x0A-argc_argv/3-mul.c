#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program multiplies two numbers
 * @ac: Argument Count
 * @av: Argument Vector
 *
 * Return: 0
 */
int		main(int ac, char *av[])
{
	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(av[1]) * atoi(av[2]));
	return (0);
}
