#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initialize variable to struct.
 * @d: Struct.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's buddy.
 * Return: None.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name != NULL)
		d->name = name;
	d->age = age;
	if (owner != NULL)
		d->owner = owner;
}
