#include "main.h"

/**
 * print_alphabet - A function that prints alphabet.
 *
 * Description: Prints alphabet 10 times in lowercase.
 * Return: 0 on success.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alpha = 'a';

	while (i <= 10)
	{
		for (alpha >= 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
		++i;
	}
}
