#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: variable
 */

void print_triangle(int size)
{
	int column;
	int line;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (column = 0; column < size; column++)
			{
				if (column >= size - line - 1)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');

		}
	}
	else
		_putchar('\n');
}
