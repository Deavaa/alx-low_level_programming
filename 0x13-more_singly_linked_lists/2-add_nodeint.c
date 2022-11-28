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
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
