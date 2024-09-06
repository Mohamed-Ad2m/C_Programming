/**
 * swap_int - swap the value of two interger
 *
 * @a: integer pointer
 * @b: integer pointer
 */
void swap_int(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
