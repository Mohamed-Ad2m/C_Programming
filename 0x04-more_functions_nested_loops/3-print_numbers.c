#include <unistd.h>

/**
 * print_numbers - Print from 0 to 9, followed b \n
 */
void print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
	write(1, "\n", 1);
}
