#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function
 * @d: struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->owner == NULL)
	{
		d->owner = "nill";
	}
	if (d->name == NULL)
	{
		d->name = "nill";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
