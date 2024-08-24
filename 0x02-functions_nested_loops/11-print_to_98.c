#include <unistd.h>
#include "main.h"

/**
 * print_g_0 - prints all natural numbers from 0 to 98,
 *				 followed by a new line.
 *
 * @n: The number to start from
 */
void	print_g_0(int n)
{
	while (n != 98)
	{
		if (n < 10)
			_putchar(n + '0');
		else if (n >= 10 && n < 100)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n >= 100)
		{
			_putchar((n / 10) / 10 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');
		}
		write(1, ", ", 2);

		if (n < 98)
			n++;
		else
			n--;
	}
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
	write(1, "\n", 1);
}

/**
 * to_0 - print the negative numbers
 *
 * @n: The number to start from
 */
void	to_0(int n)
{
	while (n < 0)
	{
		if (n > -10)
		{
			write(1, "-", 1);
			_putchar(-n + '0');
		}
		else if (n <= -10 && n > -100)
		{
			write(1, "-", 1);
			_putchar(-n / 10 + '0');
			_putchar(-n % 10 + '0');
		}
		else if (n <= -100)
		{
			write(1, "-", 1);
			_putchar((-n / 10) / 10 + '0');
			_putchar((-n / 10) % 10 + '0');
			_putchar(-n % 10 + '0');
		}
		write(1, ", ", 2);
		n++;
	}
}

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *				 followed by a new line.
 * @n: The number to start from
 */
void print_to_98(int n)
{
	if (n >= 0)
		print_g_0(n);
	else if (n < 0)
	{
		to_0(n);
		print_g_0(0);
	}
}
