#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - Duplicates a string
 * @str: string to duplicate
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int i, length;
	char *new_str;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length]; length++)
	{}
	new_str = malloc(sizeof(char) * length + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; *str; i++)
	{
		new_str[i] = *str;
		str++;
	}
	return (new_str);
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

	dog_n = malloc(sizeof(dog_t));
	if (dog_n == NULL)
	{
		free(dog_n);
		return (NULL);
	}

	dog_n->name = _strdup(name);
	dog_n->age = age;
	dog_n->owner = _strdup(owner);

	return (dog_n);
}
