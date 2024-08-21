#include <stdio.h>

/**
 * main - Print comb of signle-digit num
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
		if (ch < '9')
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
