#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 *
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
		_putchar(number + '0');
	_putchar('\n');
}
