#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - Changes all lowercase letters to uppercase
 *
 * @n: pointer
 *
 * Return: ' '
 */

char *string_toupper(char *n)
{
	int indice;

	indice = 0;

	while (n[indice] != '\0')
	{
		if (n[indice] >= 'a' && n[indice] <= 'z')
			n[indice] = n[indice] - 32;
		indice++;
	}
	return (n);
}
