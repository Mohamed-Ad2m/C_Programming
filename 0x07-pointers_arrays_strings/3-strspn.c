/**
 * _strspn - calculates the length (in bytes) of the initial
 *			 segment of s which consists entirely of bytes in accept.
 * @s: String to be scanned
 * @accept: String containing the list of characters to match in @s
 *
 * Return: The number of bytes in the initial segment
 *		   of @s which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int	n;
	char	*p;

	n = 0;
	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*p == *s)
				break;
			p++;
		}
		if (*p == '\0')
			break;
		n++;
		s++;
	}
	return (n);
}
