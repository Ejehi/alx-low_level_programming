#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array
 *
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to a function
 *
 * Return: (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && size != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
		}
	}
}
