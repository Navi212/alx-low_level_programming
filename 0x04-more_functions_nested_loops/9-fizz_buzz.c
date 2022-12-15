#include <stdio.h>
#include "main.h"

/**
 * fizzbuzz - Prints Fizz Buzz
 *
 * Return: 0 on success
 */

void fizzbuzz(void)
{
	int x;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
