#include "main.h"

/**
 * _abs - Compute the absolute value of an integer
 *
 * @n: variable
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		n = n * 1;
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}
