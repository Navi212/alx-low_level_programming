#include "lists.h"

/**
 * add_node_end - adds a node to end of list_t list
 * @head: head or start of node
 * @str: string
 *
 * Return: address of the new element
 */
/*int len(const char *str);*/

list_t *create_node(const char *str);
int len(const char *str);
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *new_node = NULL;

	if (head == NULL)
		return (NULL);
	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;

	return (*head);
}


/**
 * create_node - creates a new node
 * @str: initialization string
 *
 * Return: address or pointer to the newly
 * created element
 */
list_t *create_node(const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	
	if (new_node == NULL)
		return (NULL);

	else
	{
		new_node->str = strdup(str);
		new_node->len = len(str);
		new_node->next = NULL;

		return (new_node);
	}
}



/**
 * len - determines the length of a string
 * @str: string
 *
 * Return: string length
 */

int len(const char *str)
{	
	int i;
	if (str == NULL)
		return (0);

	else
	{
		for (i = 0; str[i] != '\0'; i++)
			;
	}

	return (i);
}

