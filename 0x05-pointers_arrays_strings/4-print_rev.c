/**
 * print_rev - Prints string in reverse order.
 * @s: Pointer argument.
 *
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int len = 0;
	int index;

	while (s[index++])
	{
		len++;

		for (index = len - 1; index >= 0; index--)
		{
			_putchar(s[index]);
		}

		_putchar('\n');
	}
}
