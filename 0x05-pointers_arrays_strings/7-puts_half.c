#include <unistd.h>

/**
 * puts_half - Print half of a string
 * @str: The string
 */
void puts_half(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	len /= 2;
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	write(1, "\n", 1);
}
