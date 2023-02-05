#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: head or start of node list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		exit(-1);

	else
	{
		while (h != NULL)
		{
			num++;
			printf("%d\n", h->n);
			h = h->next;
		}
	}

	return (num);
}
