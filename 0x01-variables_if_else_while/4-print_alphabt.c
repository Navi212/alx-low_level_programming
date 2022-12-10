#include <stdio.h>

/**
 * main - Prints alphabets in lower case except q and e.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	}
	putchar('\n');

	return (0);
}
