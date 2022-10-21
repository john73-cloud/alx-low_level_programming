#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_lists - func main
 * @h: main var
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	list_t *m = malloc(sizeof(list_t));

	m->str = h->str;
	m->len = h->len;
	m->next = h->next;
	while (m->next != NULL)
	{
		i++;
		m = m->next;
	}
	return (i);
}
