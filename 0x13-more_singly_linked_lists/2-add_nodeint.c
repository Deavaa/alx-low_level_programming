#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Add a new node in the beginning
 * @head: head node
 * @n: value
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
	{
		return (NULL);
	}
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
