/**
 * is_prime_number - Check whether a num is prime number or not
 * @n: Integer number
 *
 * Return: 1 if the input integer is a prime number,
 *		   otherwise 0.
 */
int is_prime_number(int n)
{
	int		i;

	if (n < 2)
		return (0);

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
