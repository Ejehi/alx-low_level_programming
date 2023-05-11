#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 *
 * @x: number to be raised to power y
 * @y: number to which x is to be raised
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	y--;
	return (x * _pow_recursion(x, y));
}
