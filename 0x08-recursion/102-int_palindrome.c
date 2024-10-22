/**
 * n_is_palindrome - Check if a @n is palindrome
 * @n: The integer that will be checked
 *
 * Return: 1 if it's palindrome, 0 otherwise
 */
int		n_is_palindrome(int n)
{
	int		new_n;
	int		old_n;

	old_n = n;
	new_n = 0;
	while (n)
	{
		new_n = (new_n * 10) + (n % 10);
		n /= 10;
	}
	if (old_n == new_n)
		return (1);
	return (0);
}