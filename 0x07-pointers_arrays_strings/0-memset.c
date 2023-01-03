#include "main.h"

/**
 * _memset - Fills the first n bytes of memory area pointed
 * to by by s with the constant byte b
 * @s:pointed area
 * @b:character to fill in
 * @n:number of memory in bytes to fill
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*s = b;
	return (s);
}
