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

	while (s[i] != '\0')
	{
		i++;
	}

	i = i - 1;
	k = i / 2;

	while (i >= k)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;

		i--;
		j++;
	}
}
