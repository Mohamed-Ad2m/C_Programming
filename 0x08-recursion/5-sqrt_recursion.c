/**
 * call - Find the square root of a number using recursion
 * @n: The number to find the square root of
 * @i: The current guess for the square root
 *
 * Return: The square root of n if it is a perfect square,
 *		   otherwise -1 if n is not a perfect square
 */
int		call(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (call(n, i + 1));
}

/**
 * _sqrt_recursion - Calculate the square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The square root of n if it is a perfect square,
 *		   otherwise -1 if n is not a perfect square
 */
int _sqrt_recursion(int n)
{
	call(n, 1);
}
