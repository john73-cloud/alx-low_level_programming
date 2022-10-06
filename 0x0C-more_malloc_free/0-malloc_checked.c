#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked
 * @b: int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		exit (98);
	}
	return (malloc(b));
}
