/**
 * _strcpy - copies the string pointed to by src,
 *			 including the terminating null byte (\0),
 *			 to the buffer pointed to by dest.
 * @dest: The destination
 * @src: The source
 *
 * Return: The pionter to dest
 */
char *_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
		dest[i] = src[i++];
	dest[i] = '\0';
	return (dest);
}
