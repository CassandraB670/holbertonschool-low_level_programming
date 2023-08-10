#include "main.h"

/**
 * flip_bits - returns the number of bits you wouldneed to flip
 * to get from one number to another
 *
 * @m: first number
 *
 * @n: second number
 *
 * Return: bit's number needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exc_result;
	unsigned int count;

	exc_result = n ^ m;
	count = 0;

	while (exc_result != 0)
	{
		count += exc_result & 1;
		exc_result >>= 1;
	}
	return (count);
}
