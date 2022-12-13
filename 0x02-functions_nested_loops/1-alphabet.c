#include "main.h"

/**
 * print_alphabet - A function that prints alphabet.
 *
 * Description: Prints the alphabet in lowercase.
 * Return: 0 on success.
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha >= 'a' && alpha <= 'z')
	{
		_putchar(alpha);
		++alpha;
	}

	_putchar('\n');

}
