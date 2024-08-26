#include <unistd.h>

/**
 * print_most_numbers - Print from 0 to 9 except 2 & 4
 *						followed b \n
 */
void print_most_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		if (n != '2' && n != '4')
			write(1, &n, 1);
		n++;
	}
	write(1, "\n", 1);
}
