#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");

			if (i != 100)
			{
				printf(" ");
			}

			else
			{
				continue;
			}
		}

		else if (i % 3 == 0)
		{
			printf("Fizz");

			if (i != 100)
			{
				printf(" ");
			}

			else
			{
				continue;
			}
		}

		else if (i % 5 == 0)
		{
			printf("Buzz");

			if (i != 100)
			{
				printf(" ");
			}

			else
			{
				continue;
			}
		}

		else
		{
			printf("%d", i);

			if (i != 100)
			{
				printf(" ");
			}

			else
			{
				continue;
			}
		}
	}

	printf("\n");

	return (0);
}
