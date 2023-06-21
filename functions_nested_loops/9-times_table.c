#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * starting with 0
 */

void times_table(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int m;

		for (m = 0; m < 10; m++)
		{
			int r = n * m;

			if (r > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r/10) + '0');
				_putchar((r%10) + '0');
			}
			else
			{
				if (r != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
				}
				else
					_putchar(r + '0');
			}
		}
		_putchar('\n');
	}
}

