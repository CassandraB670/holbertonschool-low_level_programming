#include "main.h"

/**
 * create_array - create an array of chars
 *
 * @size: size of the array
 *
 * @c: variable
 *
 * Return: Null if size = 0 or if it fails or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		array[count] = c;

	return (array);
}
