#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: head or start of the list list_t
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nums = 0;

	if (h == NULL)
		;

	else
	{
		while (h != NULL)
		{
			nums++;

			if (h->str == NULL)
			{
				printf("[%d] (nil)\n", 0);
			}

			else
			{
				printf("[%u] %s\n", h->len, h->str);
			}
			h = h->next;
		}
	}

	return (nums);
}
