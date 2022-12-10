#include <stdio.h>

/**
 * main - Prints single base 10 digits with putchar().
 *
 * Return: 0 on Success.
 */
int main(void)
{
	int tmp;

	for (tmp = 0; tmp <= 9; tmp++)
		putchar((tmp % 10) + '0');
	putchar('\n');

	return (0);
}
