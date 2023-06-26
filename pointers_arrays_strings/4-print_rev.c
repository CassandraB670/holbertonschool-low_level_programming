#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _sterlen - return the length of a string
 *
 * @s: pointer
 *
 * Return: length
 */


int _sterlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s : pointer
 */

void print_rev(char *s)
{
	int len = _sterlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
