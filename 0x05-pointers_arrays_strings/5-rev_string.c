/**
 * rev_string - Reverse a string
 * @s: The string
 */
void rev_string(char *s)
{
	char	temp;
	int		i;
	int		len;

	len = 0;
	while (s[len])
		len++;
	i = 0;
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}
