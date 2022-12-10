#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Checks if value stored is positive or negative.
 *
 * Return : 0 if exited successfully.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is greater than 0\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
