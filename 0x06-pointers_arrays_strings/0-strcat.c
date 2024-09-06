/**
 * _strcat -  Concatenates two strings
 * @dest: String
 * @src: String
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int		i;
	int		len;

	len = 0;
	while (dest[len])
		len++;
	i = 0;
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
