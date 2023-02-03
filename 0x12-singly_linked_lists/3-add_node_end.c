#include "lists.h"

/**
 * add_node_end - adds node to end of list
 * @head: head or start of list
 * @str: string
 *
 * Return: address of the new element
 */
unsigned int len(const char *str);
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *newnode;

	tmp = *head;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	else
	{
		newnode->str = strdup(str);
		newnode->len = len(str);
		newnode->next = NULL;
	}

	if (*head == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}

	return (*head);
}



/**
 * len - checks len of a string
 * @str: string
 *
 * Return: length of string
 */
unsigned int len(const char *str)
{
	unsigned int num = 0;

	if (str == NULL)
		exit(-1);
	else
	{
		while (str[num] != '\0')
		{
			num++;
		}
	}
	return (num);
}
