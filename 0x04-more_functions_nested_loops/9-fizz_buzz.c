#include <stdio.h>
#include "main.h"

/**
 * main - Prints the numbers from 1 to 100
 *		  But for multiples of 3 print Fizz instead of the number.
 *			  for the multiples of 5 print Buzz.
 *			  For numbers which are multiples of both print FizzBuzz.
 *
 * Return: 0
 */
int     main(void)
{
	int		n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", n);
		n++;
	}
	return (0);
}
