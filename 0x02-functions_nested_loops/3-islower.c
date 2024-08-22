#include "main.h"

/**
 * _islower - check whether c is lower or not
 *
 * @c: integer parameter
 *
 * Return: 1 if c is lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
