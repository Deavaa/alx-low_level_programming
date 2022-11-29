#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the node
 * @head: pointer the head node
 * Return: The head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *n_delete;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n_delete = *head;
	*head = n_delete->next;
	n = n_delete->n;
	free(n_delete);
	return (n);
}
