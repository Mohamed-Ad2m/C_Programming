#include <unistd.h>

/**
 * _puts - Print a string
 * @str: The string
 */
void _puts(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}
