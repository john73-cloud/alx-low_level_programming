#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function
 * @head: head
 * Return: void
 */
void free_listint(listint_t *head)
{
	free(head);
}
