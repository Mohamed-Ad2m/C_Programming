/**
 * factorial - Calculate the factorial of @n
 * @n: The number
 *
 * Return: The factorial of @n
 */
int		factorial(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

/**
 * is_strong_num - Check whether @n is a
 *				   strong number or not
 * @n: The number to be checked
 * Return: 1 if it's, 0 otherwise
 */
int		is_strong_num(int n)
{
	int		sum, old_n;

	old_n = n;
	sum = 0;
	while (n)
	{
		sum += factorial(n % 10);
		n /= 10;
	}
	return (old_n == sum) ? 1 : 0;
}
