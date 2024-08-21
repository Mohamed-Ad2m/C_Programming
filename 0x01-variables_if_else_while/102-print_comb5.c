#include <stdio.h>

/**
 * main - Print combinations of three-num
 *
 * Return: 0
 */
int	main(void)
{
	int		n1;
	int		n2;
	int		n3;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			putchar(n1 / 10 + 48);
			putchar(n1 % 10 + 48);
			putchar(' ');
			putchar(n2 / 10 + 48);
			putchar(n2 % 10 + 48);
			if (n1 < 98)
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
