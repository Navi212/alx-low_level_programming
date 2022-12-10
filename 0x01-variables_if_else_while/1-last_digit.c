#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints last digit.
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		m = n % 10;
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (n % 10 == 0)
	{
		m = n % 10;
		printf("Last digit %d is %d and is 0\n", n, m);
	}
	else
	{
		m = n % 10;
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}

	return (0);
}
