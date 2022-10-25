#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add new node
 * @head: head
 * @n: int
 * Return: listint_t pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead = malloc(sizeof(listint_t));

	newhead->n = n;
	newhead->next = (*head);
	(*head) = newhead;
	return (newhead);
}
