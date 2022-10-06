#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked
 * @b: int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);
	if (m == NULL)
	{
		exit (98);
	}
	return (malloc(b));
}
