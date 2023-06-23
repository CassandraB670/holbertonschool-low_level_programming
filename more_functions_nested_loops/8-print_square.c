#include "main.h"

/**
 * print_square - prints a square
 */

void print_square(int size)
{
	int h;
	int l;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
