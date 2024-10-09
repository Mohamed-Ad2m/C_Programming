/**
 * _memcpy - function copies @n bytes from memory area @src
 *			 to memory area @dest
 * @dest: The destination
 * @src: The source
 * @n: Number of bytes
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
