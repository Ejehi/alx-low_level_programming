#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 *
 * @size: size of the array
 * @array: array to be searched
 * @cmp: a function
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{

		if (array != NULL && cmp != NULL)
		{

			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
				i++;
			}

		}

	}

	return (-1);
}
