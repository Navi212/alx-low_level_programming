#include "main.h"
#include <stdio.h>

/**
 * times_table - A function that prints 9 multiplcation table.
 * table.
 * Return: 0 on Success.
 */
void times_table(void)
{
	int i;
	int j;
	int r;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			r = i * j;

			if ((r < 10) && (i < 9))
			{
				printf("%2d%c %c", r, ',', ' ');
			}

			else if ((r < 10) && (i >= 9))
			{
				printf("%2d", r);
			}

			else if ((r >= 10) && (i < 9))
			{
				printf("%d%c %c", r, ',', ' ');
			}

			else
			{
				printf("%d", r);
			}
		}
		printf("\n");
	}
}
