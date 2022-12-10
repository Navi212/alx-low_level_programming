#include <stdio.h>

/**
 * main - Prints Alphabets in lowercase
 *
 * Return: 0 if exited successfully.
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
