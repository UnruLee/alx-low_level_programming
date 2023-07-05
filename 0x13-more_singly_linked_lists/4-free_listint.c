#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - entry point
 * @head: function variable
 *
 * Description: a function that frees a listint_t list
 *
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	if (head == 0)
		return;

	free_listint(head->next);
	free(head);
}
