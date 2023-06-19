#include <stdio.h>

/**
 * main - prints all combinations
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar('\n');
		}
	}
	putchar('\n');
	return (0);
}

