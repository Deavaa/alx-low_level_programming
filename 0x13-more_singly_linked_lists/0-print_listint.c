#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print single lined list
 * @h pointer to list
 * Return: no.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	int i = 0;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		i++;
		tmp = tmp->next;
	}
	return (i);
}
