#include "lists.h"

/**
 * list_len - finds the number of elements in
 * a linked list list_t
 * @h: head or start of the linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nums = 0;

	if (h == NULL)
		;

	else
	{
		while (h != NULL)
		{
			nums++;
			h = h->next;
		}
	}

	return (nums);
}
