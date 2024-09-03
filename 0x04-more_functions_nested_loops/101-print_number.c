#include "main.h"

/**
 * print_number - Print integer number
 *
 * @n: The number
 */
void print_number(int n)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		_putchar('-');
		print_number(-nb);
	}
	else if (nb < 10)
		_putchar(nb + 48);
	else if (nb >= 10)
	{
		print_number(nb / 10);
		print_number(nb % 10);
	}
}
