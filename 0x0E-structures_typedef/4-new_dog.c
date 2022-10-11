#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create
 * @name: name
 * @age: age
 * @owner: owner
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
