#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - node
 * @head: head
 * @str: str
 * Return: m
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = strlen(str);
	char *r = strdup(str);
	list_t *m = malloc(sizeof(list_t *));
	
	m->len = len;
	m->str = r;
	(*head)->next = m;
	return (m);
}
