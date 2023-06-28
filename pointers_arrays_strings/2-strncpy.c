#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copies a string
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: variable
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; src[n] != '\0'; ++n)
		dest[n] = src[n];
	dest[n] = '\0';
	return (dest);
}
