#include <unistd.h>

/**
 * main - Prints the first argument to stdout
 * @ac: Arguments Count
 * @av: Arguments Vector
 *
 * Return: 0
 */
int		main(int ac, char **av)
{
	ac = 0;
	while ((*av)[ac])
		write(1, &(*av)[ac++], 1);
	return (0);
}
