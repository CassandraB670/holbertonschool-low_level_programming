#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc
 *
 * @nmemb: element's numbers in the array
 *
 * @size: size of each element
 *
 * Return: NULL or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total_size;
	unsigned int count;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (count = 0; count < total_size; count++)
		ptr[count] = 0;

	return (ptr);
}
