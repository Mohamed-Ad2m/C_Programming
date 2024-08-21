#include <stdio.h>

/**
 * main - Print digits
 *
 * Return: 0
 */
int	main(void)
{
	char	ch;

	ch = '0';
	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
