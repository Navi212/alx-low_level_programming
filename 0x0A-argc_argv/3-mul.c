#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument array
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int mulResult = 0;
	char err[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", err);

		return (1);
	}

	mulResult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mulResult);

	return (0);
}
