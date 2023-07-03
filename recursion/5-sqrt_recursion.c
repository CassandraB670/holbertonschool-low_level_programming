#include "main.h"
#include <stdio.h>

/**
 * _help_function - fonction support
 *
 * @number : n
 *
 * @racine : racine carrée de n
 *
 * Return: -1 ou racine
 */

int _help_function(int number, int racine)
{
	if ((racine * racine) > number)
		return (-1);
	else if ((racine * racine) == number)
		return (racine);
	else
		return (_help_function(number, racine + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 *
 * Return: natural square or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_help_function(n, 0));
}
