#include "lists.h"

/**
 * before_main - function that executes before
 * main function executes
 *
 * Return: nothing
 */
void before_main(void)__attribute__((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
