#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free the list
 * @head: head node of the list to be free
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while(head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
