#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - measure string length.
 * @s: value to size.
 * Return: string length.
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *(s + count); count++)
		;
	return (count);
}
/**
 * new_dog - Creates a new dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's buddy.
 * Return: Struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_2, *owner_2;
	dog_t *dog_n;

	dog_n = malloc(sizeof(dog_t));
	if (dog_n == NULL)
	{
		free(dog_n);
		return (NULL);
	}
	name_2 = malloc(sizeof(char) * _strlen(name));
	if (name_2 == NULL)
	{
		free(name_2);
		free(dog_n);
		return (NULL);
	}
	owner_2 = malloc(sizeof(char) * _strlen(owner));
	if (owner_2 == NULL)
	{
		free(owner_2);
		free(name_2);
		free(dog_n);
		return (NULL);
	}
	name_2 = name;
	owner_2 = owner;
	(*dog_n).name = name_2;
	(*dog_n).age = age;
	(*dog_n).owner = owner_2;

	return (dog_n);
}
