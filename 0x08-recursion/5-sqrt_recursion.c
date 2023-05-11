#include "main.h"

int _squarert(int n, int i);

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_squarert(n, 1));
}

/**
  * _squarert - Calculates natural square root
  * @n: number to calculate the square root
  * @i: iterate number
  *
  * Return: the natural square root
  */
int _squarert(int n, int i)
{
	int squarert = i * i;

	if (squarert > n)
		return (-1);

	if (squarert == n)
		return (i);

	return (_squarert(n, i + 1));
}

