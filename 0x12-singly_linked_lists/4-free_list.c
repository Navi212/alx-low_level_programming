#include "lists.h"

/**
 * free_list - frees a list list_t
 * @head: head or start of node list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp = NULL;

	if (head == NULL)
		exit(-1);

	else
	{
		while (head->next != NULL)
		{
			tmp = head->next;
			free(head->str);
			free(head);
			head = tmp;
		}
		free(head->str);
		free(head);
	}
}
