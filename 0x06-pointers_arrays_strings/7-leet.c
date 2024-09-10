/**
 * leet - Encodes a string into 1337
 * @s: The string
 *
 * Return: The resulting string
 */
char *leet(char *s)
{
	int		i;
	char	*leet = "aAeEoOtTlL";
	char	*t = "4433007711";

	i = 0;
	while (s[i])
	{
		while (*leet)
		{
			if (s[i] == *leet)
			{
				s[i] = *t;
				break;
			}
			leet++;
			t++;
		}
		i++;
	}
	return (s);
}
