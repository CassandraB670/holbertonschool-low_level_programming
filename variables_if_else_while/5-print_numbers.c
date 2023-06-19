#include <stdio.h>

/**
 * main - print all single number from 0 to 9
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
