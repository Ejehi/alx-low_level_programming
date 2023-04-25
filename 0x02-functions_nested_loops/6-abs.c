#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *
 *@i: the number to be computed
 *
 *Return: absolute value of integer
 */
int _abs(int i)
{
	int i;

	if (i < 0)
	{
		return (i * -1);
	}
	return (i);
}
