#include "lists.h"

/**
 * get_nodeint_at_index - find and return the nth node
 * of a listint_t linked list
 * @head: head or start of a node list
 * @index: position to insert
 *
 * Return: nth node of a linked list
 */
unsigned int num_of_nodes(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num_nodes, i;
	listint_t *tmp = head;

	num_nodes = num_of_nodes(head);

	if (head == NULL)
		return (NULL);

	else
	{
		if (index > num_nodes)
			return (NULL);

		else if (index == 0)
			return (head);

		else
		{
			for (i = 0; i < index; i++)
				head = tmp->next;
		}
	}
	return (head);
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
