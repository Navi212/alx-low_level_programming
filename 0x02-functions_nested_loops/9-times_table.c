#include "main.h"

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
				_putchar((r % 10) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			else if ((r < 10) && (i >= 9))
			{
				_putchar((r % 10) + '0');
			}

			else if ((r >= 10) && (i < 9))
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
