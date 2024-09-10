/**
 * leet - Encodes a string into 1337
 * @s: The string
 *
 * Return: The resulting string
 */
char *leet(char *s)
{
	int		i;
	int		j;
	char	leet[] = "aAeEoOtTlL";
	char	t[] = "4433007711";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (leet[j])
		{
			if (s[i] == leet[j])
			{
				s[i] = t[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
