#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - freeing up space
 * @d: dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
