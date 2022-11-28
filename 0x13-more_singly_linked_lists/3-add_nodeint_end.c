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
	listint_t *tst, *tmp;
	
	tst = malloc(sizeof(listint_t));
	if (tst == NULL)
	{
		return (NULL);
	}
	tst->n = n;
	tst->next = NULL;
	if (*head == NULL)
	{
		*head = tst;
		return (tst);
	}
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
		tmp->next = tmp;
		return (temp);
}
