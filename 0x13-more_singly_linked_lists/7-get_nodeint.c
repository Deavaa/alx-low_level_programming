#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Finds the nth node in listint_t list
 * @head: Pointer to first/head of the listint_t linked list
 * @index: Index of the node to returned
 * Return: The nth node of a listint_t linked list,
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tmp = head;

	while (tmp && (counter < index))
	{
		tmp = tmp->next;
		counter++;
	}
	if (counter < index)
	{
		return (NULL);
	}
	return (tmp);
}
