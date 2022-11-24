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
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
