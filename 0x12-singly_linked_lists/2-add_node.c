#include "l_list.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node -add node in the beginning
 * @head: head node
 * @str: string for the node
 * Return: address for new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
