#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position
 * @head: head or start of node list
 * @idx: position or location to insert
 * @n: initializer
 *
 * Return: address of the new node
 */
unsigned int num_of_nodes(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *newnode = NULL;
	unsigned int length, i;

	length = num_of_nodes(*head);

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

	if (idx > length)
		return (NULL);
	if (*head == NULL)
		*head = newnode;
	else
	{
		for (i = 1; i < idx; i++)
		{
			tmp = tmp->next;
		}

		newnode->next = tmp->next;
		tmp->next = newnode;
	}
	return (*head);
}


/**
 * num_of_nodes - finds number of nodes of a linked
 * list
 * @head: head or start of a node list
 *
 * Return: number of nodes
 */
unsigned int num_of_nodes(listint_t *head)
{
	unsigned int num = 0;

	while (head != NULL)
	{
		num++;
		head = head->next;
	}

	return (num);
}
