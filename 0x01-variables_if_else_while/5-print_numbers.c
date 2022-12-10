#include <stdio.h>

/**
 * main - Prints all single values of base 10.
 *
 * Return: 0 on Success.
 */
int main(void)
{
	int tmp;

	for (tmp = 0; tmp <= 9; tmp++)
		printf("%d", tmp);

	printf("\n");

	return (0);
}
