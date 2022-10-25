#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sum list
 * @head: head
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
