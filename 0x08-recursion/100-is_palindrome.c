/**
 * is_palindrome - Check whether a sting is palindrome or not
 * @s: The string
 *
 * Return: 1 if the sting is palindrome,
 *		   otherwise 0.
 */
int is_palindrome(char *s)
{
	int		i;
	int		len;

	len = 0;
	while (s[len])
		len++;
	len--;

	i = 0;
	while (i <= len)
	{
		if (s[i] != s[len])
			return (0);
		i++;
		len--;
	}
	return (1);
}
