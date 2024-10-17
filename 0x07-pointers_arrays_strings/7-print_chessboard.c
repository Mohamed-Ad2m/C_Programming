#include <unistd.h>

/**
 * ft_putchar - writes the character c to stdout
 *
 * @c: The character to print
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print_chessboard - Print The Chessboard
 *
 * @a: Pointer to array of 8 characters
 */
void print_chessboard(char (*a)[8])
{
	int		i;
	int		j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			ft_putchar((*a)[j]);
			j++;
		}
		ft_putchar('\n');
		a++;
		i++;
	}
}
