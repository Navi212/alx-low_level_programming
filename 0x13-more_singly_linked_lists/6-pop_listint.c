#include "lists.h"

/**
 * pop_listint - deletes the head node of a
 * listint_t linked list
 * @head: head or start of a node list
 *
 * Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp = *head;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	else
	{
		data = tmp->n;
		*head = tmp->next;
		tmp->next = NULL;
		free(tmp);
	}

	return (data);
}
