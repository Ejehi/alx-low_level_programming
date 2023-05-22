#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 *
 * @d: a variable of type struct dog
 *
 * Return: (void)
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("%s\n", (d->name) ? d->name : "Name: (nil)");
		printf("%d\n", (d->age) ? d->age : "Age: (nil)");
		printf("%s\n", (d->owner) ? d->owner : "Owner: (nil)");
	}

}
