#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * addnote_int - entry point
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
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
