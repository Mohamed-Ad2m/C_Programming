#include "main.h"

/**
 * main - Print the alphabet in lowercase
 *
 * Return: 0
 */
int	main(void)
{
	char	ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}