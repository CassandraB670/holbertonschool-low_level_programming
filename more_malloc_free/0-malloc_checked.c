#include "main.h"

/**
 * malloc_checked - allocates memoyr using malloc
 *
 * @b: variable
 *
 * Return: a pointer to the allocated memory or 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
