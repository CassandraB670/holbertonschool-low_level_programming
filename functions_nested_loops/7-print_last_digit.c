#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: variable
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last_d = n % 10;

	if (last_d < 0)
	{
		last_d = last_d * (-1);
		return (last_d);
	}
	else
		return (last_d);
}
