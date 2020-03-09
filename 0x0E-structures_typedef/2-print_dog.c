#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints struct.
 * @d: Struct.
 * Return: None.
 */
void print_dog(struct dog *d)
{
	if (d == d{})
		;
	else
	{
		if ((*d).name == NULL)
			printf("(nil)");
		else
			printf("Name: %s\n", (*d).name);
		if ((*d).age == 0)
			printf("(nil)");
		else
			printf("Name: %f\n", (*d).age);
		if ((*d).owner == NULL)
			printf("(nil)");
		else
			printf("Name: %s\n", (*d).owner);
	}
}
