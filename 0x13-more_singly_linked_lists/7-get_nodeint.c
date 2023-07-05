#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - entry point
 * @head: function variable
 * @index: index variable
 *
 * Description: a function that returns the nth node of a listint_t linked list
 *
 * Return: Always 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	list_node = head;
	i = 0;
	while (list_node != NULL)
	{
		if (i == index)
			return (list_node);
		list_node = list_node->next;
		i++;
	}
	return (NULL);
}
