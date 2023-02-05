#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of a list
 * @head: head or start of a node list
 * @n: initializer
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = NULL;
	listint_t *tmp = *head;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	else
	{
		newnode->n = n;
		newnode->next = NULL;
	}

	if (*head == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}

	return (*head);
}
