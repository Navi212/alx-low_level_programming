#include "main.h"

/**
 * cap_string - Capitalizes string
 * @s: string to change
 *
 * Return: 0 on success
 */

char *cap_string(char *s)
{
	int i, j, b;

	i = 0;
	
	while (s[i] != '\0')
		i++;

	if ((s[0] >= 97) && (s[0] <= 122))
		s[0] = s[0] - 32;

	for (j = 1; j < i; j++)
	{
		b = j - 1;

		if (s[b] == 9 || s[b] == 10 || (s[b] > 31 && s[b] < 35)
				|| s[b] == '(' || s[b] == ')' || s[b] == ',' ||
				s[b] == '.' || s[b] == ';' || s[b] '?' || s[b] =='{' || s[b] == '}')
			if ((s[j] > 96) && (s[j] < 123))
				s[j] = s[j] - 32;
	}

	return (s);
}
