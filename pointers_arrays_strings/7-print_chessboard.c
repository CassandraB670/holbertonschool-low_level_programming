#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 *
 * @a: tableau mutldimensionnel
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int column;
	int row;

	for (column = 0; column < 8; column++)
	{
		for (row = 0; row < 8; row++)
		{
			printf("%c", a[column][row]);
		}
		printf("\n");
	}
}
