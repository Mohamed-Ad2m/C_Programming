/**
 * _memset - fills the first n bytes of the memory
 *           area pointed to by s with the constant byte c.
 * @s: String
 * @b: Constant byte
 * @n: size
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		s[i++] = b;
	return (s);
}
