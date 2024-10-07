int _sqrt_recursion(int n)
{
	int		i;

	i = 1;
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (-1);
}
