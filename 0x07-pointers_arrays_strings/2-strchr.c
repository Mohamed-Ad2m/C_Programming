/**
 * _strchr - Search for the first occurrence of the
 *			 character c in the string s
 * @s: The string
 * @c: The character
 *
 * Return: A pointer to the first occurrence of the
 *		   character c in the string s, otherwise 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
