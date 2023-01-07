#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: counts arguments
 * @argv: arrays of string pointers
 *
 * Return: result
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
