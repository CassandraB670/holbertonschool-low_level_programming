#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: first array
 *
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int indice;
	int temp;

	for (indice = 0; indice < n--; indice++)
	{
		temp = a[indice];
		a[indice] = a[n];
		a[n] = temp;
	}
}
