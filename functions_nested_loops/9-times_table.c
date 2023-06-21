#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * starting with 0
 */

void times_table(void)
{
	int n;
	int m;
	int r;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');

		for (m = 1; m < 10; m++)
		{
			r = n*m;

			if (r > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r/10) + '0');
				_putchar((r%10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
		}
		_putchar('\n');
	}
}

