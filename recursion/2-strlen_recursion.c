#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 *
 * Return: len or 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
