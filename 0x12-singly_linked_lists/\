#include "l_list.h"

/**
 * list_len -calc no. of elements
 * @h: pointer to the list
 * Return: no. list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
