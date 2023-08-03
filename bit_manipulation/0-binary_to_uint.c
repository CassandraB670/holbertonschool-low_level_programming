#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;

	number = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		number = number << 1;
		number = number + (*b - '0');

		b++;
	}
	return (number);
}
