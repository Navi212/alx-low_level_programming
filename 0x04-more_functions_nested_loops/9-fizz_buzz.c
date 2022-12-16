#include "main.h"

/**
 * fizzbuzz - Prints FizzBuzz on some certain conditions
 * Return: Conditions met
 */
void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			_putchar(' ');
		}

		else if (i % 3 == 0)
		{
			printf("Fizz");
			_putchar(' ');
		}

		else if (i % 5 == 0)
		{
			printf("Buzz");
			_putchar(' ');
		}

		else
		{
			printf("%d", i);
			_putchar(' ');
		}

		if (i != 100)
		{
			_putchar(' ');
		}

	}
}
