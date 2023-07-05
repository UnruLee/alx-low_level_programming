#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - entry point
 * @head: function variable
 * @n: integer
 *
 * Description: a function that adds a new node at the end of a listint_t list
 *
 * Return: Always 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list_node;
	listint_t *temp;

	list_node = malloc(sizeof(listint_t));
	if (list_node == NULL)
		return (NULL);
	list_node->n = n;
	list_node->next = NULL;
	if (*head == NULL)
	{
		*head = list_node;
		return (list_node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = list_node;
	return (list_node);
}
