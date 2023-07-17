#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - frees dog
 *
 * @d: pointer to struct dog_t
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
