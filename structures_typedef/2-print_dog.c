#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer for struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}