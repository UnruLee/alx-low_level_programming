#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct new_list - define list
 * @s: string variable
 * @l: string length
 * @next: pointer to next node
 *
 * Description: define list
 */

typedef struct new_list
{
	char *s;
	unsigned int l;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
