#include <unistd.h>

/**
 * print_str - Print string, followed by newline
 *
 * @s: The string
 */
void	print_str(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

/**
 * main - Prints all arguments passed
 * @ac: Argument Count
 * @av: Argument Vector
 *
 * Return: 0
 */
int		main(int ac, char **av)
{
	ac = 0;
	while (*av)
		print_str(*av++);
	return (ac);
}
