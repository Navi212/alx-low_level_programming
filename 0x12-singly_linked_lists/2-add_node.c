#include "lists.h"

/**
 * add_node - adds node to the beginning of a list
 * @head: head or start of the list
 * @str: string
 *
 * Return: address of the new element
 */
unsigned int len(const char *str);
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = NULL;

	if (head == NULL)
		return (NULL);
	
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	else
	{
		newnode->str = strdup(str);
		newnode->next = NULL;
		newnode->len = len(str);
	}

	if (*head == NULL)
		*head = newnode;

	else
	{
		newnode->next = *head;
		*head = newnode;
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
