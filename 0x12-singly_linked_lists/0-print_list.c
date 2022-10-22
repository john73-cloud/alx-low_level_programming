#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - func main
 * @h: main var
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] (%s)\n", h->len, h->str);
		}
		h = h->next;
	}

	return (i);
}
