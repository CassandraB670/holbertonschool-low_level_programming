#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 *
 * @n: variable
 */

void print_line(int n)
{
	int number;

	if (n > 0)
	{
		number = 0;

		while (number < n)
		{
			_putchar('_');
			number++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
