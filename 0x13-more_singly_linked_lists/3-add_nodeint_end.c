#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add new node
 * @head: head
 * @n: int
 * Return: listint_t pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newhead = malloc(sizeof(listint_t *));
	listint_t *last = (*head);

	newhead->n = n;
	newhead->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = newhead;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newhead;
	}
	return (newhead);
}
