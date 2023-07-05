#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - entry point
 * @head: function variable
 * @n: integer
 *
 * Description: a function that adds a new node at the beginning of a
 * listint_t list
 *
 * Return: Always 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list_node;

	list_node = malloc(sizeof(listint_t));
	if (list_node == NULL)
		return (NULL);
	list_node->n = n;
	list_node->next = *head;
	*head = list_node;

	return (list_node);
}
