#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable of type struct dog
 * @d: dog to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
