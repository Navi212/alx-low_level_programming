/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer argument a.
 * @b: Pointer argument b.
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
