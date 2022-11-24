#ifndef L_LIST_H
#define L_LIST_H
#include <stdlib.h>
#include <string.h>

/**
 * strcut l_list -single linked list
 * @str: string
 * @len: string length
 * @next: pinter to next node
 */

typedef struct l_list
{
	char *str;
	unsigned int len;
	struct l_list *next;
} l_list;

l_size print_list(const l_list *h);
l_size list_len(const l_list *h);
l_list *add_node(l_lisst **head, const char *str);
l_list *add_node_end(l_list **head, const char *str);
void free_list(l_list *head);

#endif
