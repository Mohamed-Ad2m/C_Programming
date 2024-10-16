/**
 * _strstr - Locates a substring
 * @haystack: The main string
 * @needle: The substring to find
 *
 * Return: A pointer to the beginning of the located substring
 *		   0 if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char	*s;
	char	*accept;

	while (*haystack)
	{
		s = haystack;
		accept = needle;
		while (*haystack == *accept && *haystack && *accept)
		{
			haystack++;
			accept++;
		}
		if (*accept == '\0')
			return (s);
		haystack = s + 1;
	}
	return (0);
}
