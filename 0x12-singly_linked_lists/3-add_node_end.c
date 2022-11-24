#include "l_list.h"

/**
 * add_node_end - add new node at the end
 * @head: first node
 * @str: string
 * Return: address of new node in memory
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	temp->len = i;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	temp2 = *head;
	while (temp2->next)
	{
		temp2 = temp2->next;
	}
	temp2->next = temp;
	return (temp);
}
