#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: a pointer to a string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s == '0')
	{
		return sum;
	}
	
	s++;	
	sum++;
	_strlen_recursion(s);
	return sum;
}
