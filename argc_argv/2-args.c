#include "main.h"
#include <stdio.h>

/**
 * main - fonction that prints all arguments it receives
 *
 * @argc: size of argv
 *
 * @argv: string of argument
 *
 * Return: all argument
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
