#include <unistd.h>
#include "main.h"

/**
 * more_numbers - Print from 0 to 14 10 times, followed b \n
 */
void more_numbers(void)
{
	int		n;
	int		i;

	i = 0;
	while (i < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n <= 9)
				putchar(n + 48);
			else
			{
				putchar(n / 10 + 48);
				putchar(n % 10 + 48);
			}
			n++;
		}
		putchar('\n');
		i++;
	}
}
