#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t
 * @h: Pointer to the head of the list
 * Return: The number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
