#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to newdog or returns
 * the new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL && age < 0 && owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (my_dog->name == NULL)
		return (NULL);

	my_dog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (my_dog->owner == NULL)
		return (NULL);

	my_dog->name = strcpy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = strcpy(my_dog->owner, owner);

	return (my_dog);
}
