#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - Duplicates a string
 * @str: string to duplicate
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int c = 0, s = 0;

	char *d;

	if (str == NULL)
		return (NULL);
	while (str[s] != '\0')
	{
		s++;
		c++;
	}
	c = 0;
	d = malloc(sizeof(char) * (s + 1));
	if (d == NULL)
		return (NULL);
	while (c < (s + 1))
	{
		d[c] = str[c];
		c++;
	}

	if (str == NULL)
		return (NULL);
	return (d);
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
	dog_t *dog_n;
	char *name_copy, *owner_copy;

	name_copy = _strdup(name);
	owner_copy = _strdup(owner);
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}
	dog_n = malloc(sizeof(dog_t));
	if (dog_n == NULL)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}
	dog_n->name = name_copy;
	dog_n->age = age;
	dog_n->owner = owner_copy;

	return (dog_n);
}
