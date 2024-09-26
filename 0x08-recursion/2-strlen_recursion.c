/**
 * _strlen_recursion - Calculate the length of @s
 * @s: The string
 *
 * Return: The length of the string
 */
int	_strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
