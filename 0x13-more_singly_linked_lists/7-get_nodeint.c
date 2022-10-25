#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - function
 * @head: head
 * @index: index
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		if (i == index)
		{
			return (tmp);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
