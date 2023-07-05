#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - entry point
 * @head: function variable
 *
 * Description:a function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 *
 * Return: Always 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
