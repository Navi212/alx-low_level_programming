#include "lists.h"

/**
 * free_listint2 - frees listint2_t list
 * @head: head or start of the node list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	if (head == NULL)
		exit(-1);
	else
	{
		while ((*head)->next != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		free(*head);
		*head = NULL;
	}
}
