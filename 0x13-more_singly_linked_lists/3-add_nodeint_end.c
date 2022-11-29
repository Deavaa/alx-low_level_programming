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
	listint_t *current;
	listint_t *last;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
	{
		return (NULL);
	}
	current->n = n;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	else
	{
		last = *head;
		while (lastn->next)
		{
			last = last->next;
		}
		last->next = current;
	}
	return (current);
}
