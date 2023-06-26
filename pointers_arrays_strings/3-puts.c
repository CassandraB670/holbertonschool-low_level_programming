#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a strin
 *
 * @str: pointer
 *
 * Return: str
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}
