#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - a function that creates a new dog
  * @name: name of the new dog
  * @age: age of the new dog
  * @owner: owner of the new dog
  *
  * Return: a variable of type struct dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_new_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		a_new_dog = malloc(sizeof(dog_t));

		if (a_new_dog == NULL)
			return (NULL);

		a_new_dog->name = malloc(sizeof(char) * name_l);

		if (a_new_dog->name == NULL)
		{
			free(a_new_dog);
			return (NULL);
		}

		a_new_dog->owner = malloc(sizeof(char) * own_l);

		if (a_new_dog->owner == NULL)
		{
			free(a_new_dog->name);
			free(a_new_dog);
			return (NULL);
		}

		a_new_dog->name = _strcpy(a_new_dog->name, name);
		a_new_dog->owner = _strcpy(a_new_dog->owner, owner);
		a_new_dog->age = age;
	}

	return (a_new_dog);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
