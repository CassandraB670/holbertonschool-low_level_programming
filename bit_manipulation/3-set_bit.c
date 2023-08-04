#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @index: index starting from 0 of the bit
 *
 * @n: number we want to modify
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
