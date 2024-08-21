#include <stdio.h>

/**
 * main - Print the alphabet in lowercase except q & e
 *
 * Return: 0
 */
int	main(void)
{
	char	ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
