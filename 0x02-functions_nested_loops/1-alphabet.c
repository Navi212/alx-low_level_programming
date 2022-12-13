#include "main.h"

/**
 * main - Entry point of our program.
 *
 * Description: A function that prints the alphabet in lowercase.
 * Return: 0 on success.
 */
int main(void)
{
	char alpha = 'a';

	while (alpha >= 'a' && alpha <= 'z')
	{
		_putchar(alpha);
		++alpha;
	}

	_putchar('\n');
}
