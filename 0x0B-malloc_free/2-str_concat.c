#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates s2 to s1
 * @s1: destination string
 * @s2: source string
 *
 * Return: pointer to s1
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j, len_s1, len_s2, sum = 0;

	if (s1 == NULL)
		s1 ="";

	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;

	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	sum = len_s1 + len_s2;

	arr = malloc(sizeof(char) * (sum + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		arr[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		arr[i++] = s2[j];
	arr[i++] = '\0';

	return (arr);
}
