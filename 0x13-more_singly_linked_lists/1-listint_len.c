#include "lists.h"

/**
 * listint_len - checks the number of elements in
 * a linked list list_t
 * @h: head or start of the node list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		exit(-1);

	else
	{
		while (h != NULL)
		{
			num++;
			h = h->next;
		}
	}

	return (num);
}
