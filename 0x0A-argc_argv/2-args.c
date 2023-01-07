#include <stdio.h>
#include "main.h"

/**
 * main - prints all argument it receives
 * @argc: argument count
 * @argv: array of strings
 *
 * Description: prints all argument it receives
 * All arguments should be printed including the first one
 * Only print one argument per line, ending with a new line
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
