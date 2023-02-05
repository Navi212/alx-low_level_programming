#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of a list
 * @head: head or start of a node list
 * @n: initilizer
 *
 * Return: address of the new element
 * or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = NULL;

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
		newnode->next = *head;
		*head = newnode;
	}

	return (*head);
}
