#include <stdio.h>

/**
 * main - prints all possible different combinations
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int unite;
	int dizaine;
	int centaine;

	for (centaine = 0; centaine <= 9; centaine++)
	{
		for (dizaine = centaine + 1; dizaine < 10; dizaine++)
		{
			for (unite = dizaine + 1; unite < 10; unite++)
			{
				putchar(centaine + '0');
				putchar(dizaine + '0');
				putchar(unite + '0');
				if (centaine < 7 && dizaine < 9 && unite < 10)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
