/**
 * is_strong_num - Check whether @n is an
 *				  armstrong number or not
 * @n: The number to be checked
 * Return: 1 if it's, 0 otherwise
 */
int		is_strong_num(int n)
{
	int		sum, nb, old_n;
	int		i, t;

	t = -1;
	old_n = nb = n;
	while (nb)
	{
		t++;
		nb /= 10;
	}
	sum = 0;
	while (n)
	{
		i = -1;
		nb = n % 10;
		while (++i < t)
			nb *= (n % 10);
		sum += nb;
		n /= 10;
	}
	return (old_n == sum) ? 1 : 0;
}