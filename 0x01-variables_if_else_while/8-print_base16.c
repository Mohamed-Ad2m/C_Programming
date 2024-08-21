#include <stdio.h>

/**
 * main - Print num of base 16 in lower
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
	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
