#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: name to print
 * @f : funtcion pointer taking a char paramemter
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
