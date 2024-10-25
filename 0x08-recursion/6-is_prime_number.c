/**
 * _sqrt_recursion - Calculate the square root of @n
 * @n: The number
 *
 * Return: The square root of @n, -1 otherwise
 */
int _sqrt(int n)
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

/**
 * is_prime - Check whether @n is a prime number
 * @n: The number to be checked
 *
 * Return: 1 if it's, 0 otherwise
 */
int		is_prime(int n)
{
	int		i;
	int		stp;

	i = 2;
	stp = sqrt(n);
	while (i <= stp)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (n < 2 ? 0 : 1);
}
