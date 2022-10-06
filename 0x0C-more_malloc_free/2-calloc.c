#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - calloc demo
 * @nmemb: mem
 * @size: size
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *t = calloc(nmemb, size);

	if (t == 0)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	return (calloc(nmemb, size));
}
