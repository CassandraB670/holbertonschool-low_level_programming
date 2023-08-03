#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @index: index starting from 0
 *
 * @n: number
 *
 * Return: valus of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit_mask = 1UL << index;

	if ((n & bit_mask) == 0)
		return (0);
	else
		return (1);
}
