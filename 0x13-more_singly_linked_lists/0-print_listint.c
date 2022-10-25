#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print list
 * @h: list
 * Return: size_t length
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
