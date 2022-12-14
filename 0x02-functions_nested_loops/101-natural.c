#include <stdio.h>

/**
 * main - Prints multiples of 3.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int num = 1024;
	int i;
	int sum = 0;

	for (i = 0; i < num; ++i)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}

		
	}

	printf("%d\n", sum);

	return (0);

}
