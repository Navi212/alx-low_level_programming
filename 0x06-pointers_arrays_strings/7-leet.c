#include "main.h"

/**
 * leet - Encodes srting to 1337
 * @s: string to encode
 *
 * Return: 0 on success
 */

char *leet(char *s)
{
	int i, j;

	char leet1[] = "aeotl";
	char leet2 = "AEOTL";
	char leet3[] = "43071";

	j = 0;
	while (*s != 0)
	{
		for (i = 0; i <= 4; i++)
		{
			if (*s == leet1[i] || *s == leet2[i])
				*s = leet3[i];
		}
		s++;
		j++;
	}

	s = s - j;

	return (s);
}
