/**
 * rot13 - Encodes a string using rot13
 * @s: The string
 *
 * Return: The resulting string
 */
char *rot13(char *s)
{
	char	*str = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char	*rot_13 = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
	int		i;
	int		j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (str[j])
		{
			if (s[i] == str[j])
			{
				s[i] = rot_13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
