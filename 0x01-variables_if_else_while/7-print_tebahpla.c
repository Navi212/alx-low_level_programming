#include <stdio.h>

/**
 * main - Prints lowercase alphabets in reverse order.
 *
 * Return: 0 on Sucess.
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha--)
		putchar(alpha);
	putchar('\n');

	return (0);
}
