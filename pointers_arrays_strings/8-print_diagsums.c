#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a:
 *
 * @size:
 */

void print_diagsums(int *a, int size)
{
	int i;
	int num1 = 0;
	int num2 = 0;

	for (i = 0; i < size; i++)
	{
		num1 += a[i * size + 1];
		num2 += a[i * size + (size - 1 -i)];
	}
	printf("%d, %d\n", num1, num2);
}
