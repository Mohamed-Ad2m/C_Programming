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
	while (n1 < 9)
	{
		n2 = n1 + 1;
		while (n2 < 9)
		{
			n3 = n2 + 1;
			while (n3 <= 9)
			{
				putchar(n1 + 48);
				putchar(n2 + 48);
				putchar(n3 + 48);
				if (n1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
