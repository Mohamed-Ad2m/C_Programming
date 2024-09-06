/**
 * _strncpy -  Copies a string
 * @dest: The destination String
 * @src: The source String
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int		i;

	i = 0;
	while (src[i] && i < n)
		dest[i] = src[i];
	while (i < n)
		dest[i] = '\0';
	return (dest);
}