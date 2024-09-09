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
	if (len % 2 == 0)
		len /= 2;
	else
		len = (len - 1) / 2;
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	write(1, "\n", 1);
}
