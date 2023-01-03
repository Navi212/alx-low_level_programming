#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory
 * memory area dest
 * @dest: copy into dest
 * @src: copy from src
 * @n: copy n bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (src = src, dest = dest; (unsigned int)*src < n; src++, dest++)
		*dest = *src;
	return (dest);
}
