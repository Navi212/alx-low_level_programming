#include <stdio.h>

/**
 * multiples_of_3 - Prints multiples of 3.
 *
 * Return: 0 on success.
 */
int multiples_of_3(void)
{
	int num = 3;
	int i;

	for (; i < 1024; ++i)
	{
		if (i % num == 0)
		{
			printf("%d \n", i);
		}

		else
		{
			continue;
		}
	}

	return (0);
}
