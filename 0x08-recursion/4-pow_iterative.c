int _pow_recursion(int x, int y)
{
	int		r;

	if (y < 0)
		return (-1);
	else if (y == 0 || (y == 0 && x == 0))
		return (1);

	r = 1;
	while (y > 0)
	{
		r = r * x;
		y--;
	}
	return (r);
}
