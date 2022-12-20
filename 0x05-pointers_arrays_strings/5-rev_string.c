#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: String Argument.
 *
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int i;
	int j;
	int k;
	char tmp;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	k = i / 2;
	i = i - 1;

	while (i >= k)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;

		i--;
		j++;
	}
}
