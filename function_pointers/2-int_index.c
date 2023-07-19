#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - return the index of the first element
 *
 * @array: array
 *
 * @size: number of elements in the aray
 *
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
