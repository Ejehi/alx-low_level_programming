#include <stdio.h>

/**
 * _puts_recursion - prints a string
 *
 * @s : pointer to a string
 *
 * Return: void
 **/
void _puts_recursion(char *s)
{
	if (*s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
