#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete
 * @head: head
 * @index: index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = (*head);
	listint_t *current = malloc(sizeof(listint_t));

	if (index == 0)
	{
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
			tmp = tmp->next;
		current = tmp->next;
		tmp->next = tmp->next->next;

		free(current);
	}
	return (1);
}
