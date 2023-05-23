#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  function returns a pointer to a new string
 * which is a duplicate of the string str
 *
 * @str: a pointer to a string
 *
 * Return: pointer to duplicate of the string str
 */
char *_strdup(char *str)
{
	int a = 0, i = 0;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	duplicate = malloc(i * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	while (a < i)
	{
		duplicate[a] = str[a];
		a++;
	}

	duplicate[a] = '\0';
	return (duplicate);
}
