#include "main.h"

/**
 * _islower - Check for lowercase character
 *
 * @c: variable
 *
 * Return: return 1 if lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
