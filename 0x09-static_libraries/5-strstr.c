#include "main.h"
#include <stdio.h>

/**
 * _strstr - Finds the occurence of substring needle in
 * the string haystack
 * @haystack: input string
 * @needle: input string
 *
 * Return: pointer to the beginning of the located
 * substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *secnd = needle;

		while (*first == *secnd && *secnd != '\0')
		{
			first++;
			secnd++;
		}

		if (*secnd == '\0')
			return (haystack);
	}

	return (NULL);
}
