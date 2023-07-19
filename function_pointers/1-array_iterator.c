#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - Execute a function given as a parameter on each element
 *
 * @array: array we want to initialize
 *
 * @size: size of the array
 *
 * @action: pointer to the function we need
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
