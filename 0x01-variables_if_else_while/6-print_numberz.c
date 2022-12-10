#include <stdio.h>

/**
 * main - Prints single base 10 digits with putchar().
 *
 * Return: 0 on Success.
 */
int main(void)
{
	char tmp = '0';

	for (tmp = '0'; tmp <= '9'; tmp++)
		putchar(tmp);
	putchar('\n');

	return (0);
}
