#include "main.h"

/**
 * more_numbers - Print from 0 to 14 10 times, followed b \n
 */
void more_numbers(void)
{
	int		n;

	n = 0;
	while (n <= 14)
	{
		if (n <= 9)
			_putchar(n + 48);
		else
		{
			_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
		}
		n++;
	}
	_putchar('\n');
}
