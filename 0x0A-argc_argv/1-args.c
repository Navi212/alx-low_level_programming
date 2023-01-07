#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed to it
 * @argc: counts arguments
 * @argv: contains arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
