#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 *@s: pointer
 *
 * @b: constant byte
 *
 * @n: number of bytes to be changed
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
