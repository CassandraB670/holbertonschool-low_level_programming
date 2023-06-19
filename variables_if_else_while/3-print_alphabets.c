#include <stdio.h>

/**
 * main - write the alphabet in lower and uppercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	alpha = 'A';

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
