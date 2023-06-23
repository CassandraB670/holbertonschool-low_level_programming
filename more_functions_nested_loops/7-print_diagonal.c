#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: variable
 */

void print_diagonal(int n)
{
	int number;
	int space;

	if (n > 0)
	{
		for (number = 0; number < n; number++)
		{
			for (space = 0; space < number; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
