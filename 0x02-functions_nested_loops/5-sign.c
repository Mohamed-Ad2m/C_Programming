#include "main.h"

/**
 * print_sign - Print the sign of a number
 *
 * @n: The integer to be checked
 *
 * Return: 1 if @n is negative, -1 if @n is positive
 *		   0 if @n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (0);
}
