#include "main.h"

/**
 * print_alphabet_x10 - print 10 time the alphabet
 *
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char a = 'a';

	while (n < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
		n++;
	}
}
