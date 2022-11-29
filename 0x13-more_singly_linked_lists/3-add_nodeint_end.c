#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add node in the end
 * @head: head node
 * @n: value
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_head;
	listint_t *lastnode;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
	{
		return (NULL);
	}
	new_head->n = n;
	new_head->next = NULL;
	if (*head == NULL)
	{
		*head = new_head;
		return (new_head);
	}
	else
	{
		lastnode = *head;
		while (lastnode->next)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = new_head;
	}
	return (new_head);
}
