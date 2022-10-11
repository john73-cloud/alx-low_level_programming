#include <stdio.h>
#include "dog.h"
/**
 * new_dog - create
 * @name: name
 * @age: age
 * @owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newdog;

	newdog.name = name;
	newdog.age = age;
	newdog.owner = owner;
}
