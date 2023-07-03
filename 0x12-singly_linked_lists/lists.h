#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct new_list - define list
 * @str: string variable
 * @l: string length
 * @next: pointer to next node
 *
 * Description: define list
 */

typedef struct new_list
{
	char *str;
	unsigned int l;
	struct new_list *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
