#include "lists.h"

/**
 * sum_listint - sum of all the data(n) of a
 * listint_t linked list
 * @head: head or start of a node list
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	else
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
