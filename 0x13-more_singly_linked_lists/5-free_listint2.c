#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - entry point
 * @head: function variable
 *
 * Description: a function that frees a listint_t list.
 *
 * Return: Always 0
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
