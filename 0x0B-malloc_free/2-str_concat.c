#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, n = 0, m = 0, l = 0, _index = 0;
	char *concat_string;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i])
	{
		i++;
	}

	while (s2[n])
	{
		n++;
	}

	m = i + n;
	concat_string = malloc((sizeof(char) * m) + 1);

	if (concat_string == NULL)
	{
		return (NULL);
	}

	while (_index < i)
	{
		concat_string[_index] = s1[_index];
		_index++;
	}

	while (_index < m)
	{
		concat_string[_index] = s2[l];
		_index++;
		l++;
	}

	concat_string[m] = '\0';
	return (concat_string);
}
