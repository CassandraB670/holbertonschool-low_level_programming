#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bit_count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			bit_count = 1;
		}
		else if (bit_count)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
