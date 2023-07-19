#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - Function that prints a name
 *
 * @name: name to print
 *
 * @f: pointer to the function
 *
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
