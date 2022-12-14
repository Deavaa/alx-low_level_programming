#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint -  reverses list
 * @head: pointer to head
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *point_to;

	if (!(*head))
	{
		return (NULL);
	}
	point_to = NULL;
	next_node = (*head)->next;
	(*head)->next = point_to;
	point_to = *head;
	while (next_node)
	{
		*head = next_node;
		next_node = (*head)->next;
		(*head)->next = point_to;
		point_to = *head;
	}
	return (*head);
}
