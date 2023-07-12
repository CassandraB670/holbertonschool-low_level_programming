#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: variable
 *
 * @max: variable
 *
 * Return: NULL or pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int array;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	array = 0;

	while (min <= max)
	{
		ptr[array] = min;
		min++;
		array++;
	}
	return (ptr);
}
