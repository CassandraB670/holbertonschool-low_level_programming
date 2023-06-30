#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copies memory area
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: number of bytes to duplicate
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
