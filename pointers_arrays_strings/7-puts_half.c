#include "main.h"
#include <stdio.h>


/**
 * _strlen - function that returns the length of a string
 *
 * @s: pointer
 *
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;
	return (len);
}

/**
 * puts_half - print the sd half of the string
 *
 * @str: pointer
 */

void puts_half(char *str)
{
	int len;

	len = _strlen(str);

	for (len = (len / 2); str[len] != '\0'; len++)
		_putchar(str[len]);
	_putchar('\n');
}
