#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: string
 *
 * @size: number
 */

void print_diagsums(int *a, int size)
{
	int i;
	int num1 = 0;
	int num2 = 0;

	for (i = 0; i < size; i++)
	{
		num1 += a[i * size + i];
		num2 += a[(i + 1) * size - (i + 1)];
	}
	printf("%d, %d\n", num1, num2);
}
