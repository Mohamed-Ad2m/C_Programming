/**
 * _atoi - Convert a string to an integer
 * @s: The string
 *
 * Return: An integer
 */
int _atoi(char *s)
{
	int		i;
	int		sign;
	int		r;

	i = 0;
	sign = 1;
	r = 0;
	if (!*s)
		return (0);
	while (!(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
		r = (r * 10) + (s[i++] - '0');
	return (sign * r);
}
