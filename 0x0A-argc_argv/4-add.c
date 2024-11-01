#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @ac: arguments count
 * @av: arguments
 * Return: Alwyas 0.
 */
int main(int ac, char *av[])
{
	int i, j, sum = 0;

	if (ac < 2)
		printf("0\n");
	else
	{
		av++;
		while (*av)
		{
			while (**av)
			{
				// printf("%s\n", *av);
				if (!(**av >= '0' && **av <= '9'))
				{
					printf("Error\n");
					return (1);
				}
				*(*av)++; // a[0][0]
			}
			sum += atoi(*av);
			*av++;
		}
		printf("%d\n", sum);
	}

	return (0);
}