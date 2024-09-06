#include <unistd.h>

/**
 * print_rev - Print the string in reverse
 * @s: The string
 */
void print_rev(char *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	len--;
	while (len >= 0)
	{
		write(1, &s[len], 1);
		len--;
	}
	write(1, "\n", 1);
}
