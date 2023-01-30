#include "lists.h"

/**
 * add_node - adds a node at the begining of
 * a list_t list
 * @head: head or first node
 * @str: string
 *
 * Return: address of the new element
 */

size_t len(const char *str);

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
		exit(-1);
	}

	else
	{
		new_node->str = strdup(str);
		new_node->next = *head;
		new_node->len = len(str);
		*head = new_node;
	}

	return (new_node);
}


/**
 * len - determines th length of a string
 * @str: string to check
 *
 * Return: length of string
 */

size_t len(const char *str)
{
	size_t i;
	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
