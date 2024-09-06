#include <unistd.h>

/**
 * print_number - Prints an integer
 * @nb: The integer
 */
void print_number(int nb)
{
	char	buf[10];
	int		i;
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}

	i = 0;
	while (n)
	{
		buf[i++] = n % 10 + '0';
		n /= 10;
	}
	while (i > 0)
		write(1, &buf[--i], 1);
}
