#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head or start of a node list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	if (head == NULL)
		exit(-1);

	else
	{
		while (head->next != NULL)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
		free(head);
	}
}
