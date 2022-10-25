#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function
 * @head: pointer to a pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while ((*head) != NULL)
	{
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
	(*head) = NULL;
}
