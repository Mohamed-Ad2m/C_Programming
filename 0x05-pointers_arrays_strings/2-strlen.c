/**
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
