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
	int i = 1;
	list_t *m = malloc(sizeof(list_t));

	m->str = h->str;
	m->len = h->len;
	m->next = h->next;
	for (i = 0; m != NULL; i++)
	{
		if (m->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] (%s)\n", m->len, m->str);
		}
		m = m->next;
	}

	return (i);
}
