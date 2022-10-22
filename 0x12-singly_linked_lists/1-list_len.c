#include <stdio.h>
#include "lists.h"
/**
 * list_len - func main
 * @h: main var
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
