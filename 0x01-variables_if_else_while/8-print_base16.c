#include <stdio.h>

/**
 * main - Prints all base 16 in lowercase, followed by a newline.
 *
 * Return: 0 on Success.
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
