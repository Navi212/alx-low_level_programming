#include <stdio.h>
#include "main.h"

/**
 * main - prints name of of a program
 * @argc: int variable
 * @argv: array of strings
 *
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
