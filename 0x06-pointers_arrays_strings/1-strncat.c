/**
 * _strncat -  Concatenates two strings
 * @dest: String
 * @src: String
 * @n: The number of bytes to concatenates
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int		i;
	int		len;

	len = 0;
	while (dest[len])
		len++;
	i = 0;
	while (src[i] && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}
