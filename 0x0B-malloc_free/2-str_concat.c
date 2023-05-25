#include <stdlib.h>
#include "main.h"

/**
 * _strlen - a function to check string length
 *
 * @str: string to check
 *
 * Return: string length
 */
int _strlen(char *str)
{
	int str_length = 0;

	while (str[i])
	{
		str_length++;
	}

	return (str_length);

}

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
	int i = _strlen(s1), n = _strlen(s2), m = 0, l = 0, _index = 0;
	char *concat_string;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
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
