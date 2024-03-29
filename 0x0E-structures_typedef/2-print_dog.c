#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog structure
 * @d: pointer to dog structure
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name :(nil)\n");
	else
		printf("%s\n", d->name);

	if (d->age <= 0)
		printf("Age :(nil)\n");
	else
		printf("%f\n", d->age);

	if (d->owner == NULL)
		printf("Owner :(nil\n");
	else
		printf("%s\n", d->owner);
}
