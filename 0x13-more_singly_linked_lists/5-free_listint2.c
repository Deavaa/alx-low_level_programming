#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 -frees the list
 * @head: point to head node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}
}
