#include "main.h"

/**
 * _strspn  gets the length of a prefix substring
 * @s: input string to check
 * @accept: input string
 *
 * Return: number of bytes/character
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			else
				continue;
		}
	}

	return (count);
}
