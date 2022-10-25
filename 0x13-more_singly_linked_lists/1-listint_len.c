#include <stdio.h>
#include "lists.h"
/**
 * listint_len - print list
 * @h: list
 * Return: size_t length
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
