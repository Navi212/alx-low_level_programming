#include <stdio.h>

/**
 * main - Prints all possible single digits seperated by coma and spaces.
 *
 * Return: 0 on Success.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0')
			if (num == 9)
				continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
