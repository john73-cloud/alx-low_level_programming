#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - list
 * @head: head
 * Return: void
 */
int pop_listint(listint_t **head)
{
	int n = (*head)->n;
	listint_t *m;

	m = (*head);
	(*head) = (*head)->next;

	free(m);
	return (n);
}
