#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * len - length of a list
 * @h: head of list
 * Return: int
 */
int len(listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
/**
 * insert_nodeint_at_index - insert
 * @head: head
 * @idx: index
 * @n: data
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp = (*head);
	unsigned int size = len((*head));

	new->n = n;
	new->next = NULL;
	if (idx > size)
	{
		return (NULL);
	}
	else if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
	}
	else
	{
		while (--idx)
		{
			tmp = tmp->next;
		}
		new->next = tmp->next;
		tmp->next = new;
	}
	if (new == NULL)
	{
		return (NULL);
	}
	return (new);
}
