#include <stdio.h>

/**
 * main - prints alphabet in reverse
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
