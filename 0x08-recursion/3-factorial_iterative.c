int iterative_factorial(int n)
{
	int		i;

	if (n < 0)
		return (-1);

	i = 1;
	while (n > 0)
	{
		i = i * n;
		n--;
	}
	return (i);
}