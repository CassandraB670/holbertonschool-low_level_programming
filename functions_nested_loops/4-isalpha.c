#include "main.h"

/**
 * _isalpha - check for alphabetic character
 *
 * @c: variable
 *
 * Return: 1 if alphabetic character, otherwise 0
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
