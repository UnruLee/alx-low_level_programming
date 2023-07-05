#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - entry point
 * @head: function variable
 *
 * Description: a function that returns the sum of all the data (n) of a
 * listint_t linked list.
 *
 * Return: Always 0
 */

int sum_listint(listint_t *head)
{
	int num;
	listint_t *list_node;

	num = 0;
	if (head == NULL)
		return (num);
	list_node = head;
	while (list_node != NULL)
	{
		num += list_node->n;
		list_node = list_node->next;
	}
	return (num);
}
