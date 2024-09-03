#include "main.h"
#include <stdio.h>
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
		putchar('-');
		print_number(-nb);
	}
	else if (n < 10)
		putchar(nb + 48);
	else if (n >= 10)
	{
		print_number(nb / 10);
		print_number(nb % 10);
	}
}
