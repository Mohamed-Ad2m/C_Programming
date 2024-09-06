/**
 * is_char_or_num - Check wether a character is a letter or digit
 * @c: Character
 *
 * Return: 1 if @c is a letter of digit, 0 otherwise
 */
int		is_char_or_num(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string
 *
 * Return: The resulting string
 */
char *cap_string(char *s)
{
	int		first;
	int		i;

	i = 0;
	first = 0;
	while (s[i])
	{
		if (is_char_or_num(s[i]))
		{
			if (!first && (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] -= 32;
				first = 1;
			}
			else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
				first = 1;
		}
		else
			first = 0;
		i++;
	}
	return (s);
}
