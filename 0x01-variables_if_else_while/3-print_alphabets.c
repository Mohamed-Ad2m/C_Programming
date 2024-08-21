#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *	  then in uppercase
 *
 * Return: 0
 */
int	main(void)
{
	char	ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'a' - 32;
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
