#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Print single lined list
 * @h pointer to list
 * Return: no.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	unsigned int i = 0;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
