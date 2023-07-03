#include "main.h"
#include <stdio.h>

/**
 * _help_function - fonction support
 *
 * @number: nombre
 *
 * @div: diviseur
 *
 * Return: 0 if false, 1 if true
 */

int _help_function(int number, int div)
{
	if (number <= 1)
	{
		return (0);
	}
	else if (div == 1)
	{
		return (1);
	}
	else
	{
		if (number % div == 0)
			return (0);
		return (_help_function(number, div - 1));
	}
}

/**
 * is_prime_number - returns 1 if prime number
 *
 * @n : number
 *
 * Return: 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	int div = n - 1;

	return (_help_function(n, div));
}

