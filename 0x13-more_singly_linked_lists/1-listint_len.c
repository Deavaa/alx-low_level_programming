#include "lists.h"
#include <stdio.h>

/**
 * listint_len - no of elements
 * @h: pointer to list
 * Return: no of list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
