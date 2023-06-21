#include "main.h"

/**
 * print_alphabet_x10 - print 10 time the alphabet
 *
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
		n++;
	}
}
