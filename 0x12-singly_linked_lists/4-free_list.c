#include "lists.h"

/**
 * free_list - frees node
 * @head: head
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp = NULL;
	
	if (head == NULL)
		return;

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
