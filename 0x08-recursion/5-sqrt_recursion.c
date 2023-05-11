#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 *
 * @n: an integer
 * @i: natural square root of n
 *
 * Return: i if found and -1 otherwise
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i <= n)
	{
		if ((n % i == 0) && (n / i == i))
		{
			return (i);
		}

		i++;
		return (_sqrt_recursion(n, i));
	}

	else
	{
		return (-1);
	}
}
