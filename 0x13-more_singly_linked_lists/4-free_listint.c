#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - free the linked list
 * @head: pointer to head node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
