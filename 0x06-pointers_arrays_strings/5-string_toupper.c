#include "main.h"

/**
 * string_toupper - Changes lowercase letters to uppercase
 * @s: string to change
 *
 * Return: 0 on success.
 */

char *string_toupper(char *s)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if ((s[j] >= 97) && (s[j] <= 122))
			s[j] = s[j] - 32;
	}

	return (s);
}
