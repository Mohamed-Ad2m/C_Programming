#include <unistd.h>

/**
 * ft_strlen - Calculate the length of @s
 * @s: The string
 *
 * Return: The length of the string
 */
int		ft_strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + ft_strlen(s + 1));
}

/**
 * print_rev - Print the string @s in reverse order
 *
 * @s: The string to print
 * @len: The index of the character to print
 */
void	print_rev(char *s, int len)
{
	if (len < 0)
		return;
	write(1, &s[len], 1);
	print_rev(s, len - 1);
}

/**
 * _print_rev_recursion - Initiate the reverse printing of @s
 *
 * @s: The string to print
 */
void _print_rev_recursion(char *s)
{
	int		len;

	len = ft_strlen(s);
	len--;
	print_rev(s, len);
}
