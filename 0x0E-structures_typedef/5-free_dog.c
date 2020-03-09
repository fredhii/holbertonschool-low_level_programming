#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Liberates memory from previous functions.
 * @d: struct.
 * Return: none.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
