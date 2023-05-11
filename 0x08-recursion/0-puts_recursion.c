#include <stdio.h>

/**
 * _puts_recursion - prints a string
 *
 * @s : pointer to a string
 *
 * Return: void
 **/
void _puts_recursion(char *s);
{
	int i = 0;

	if (*s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar("%c", *s[i]);
	i++;
	_puts_recursion(*(s + i));
}
