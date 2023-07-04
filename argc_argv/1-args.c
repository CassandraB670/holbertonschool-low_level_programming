#include "main.h"
#include <stdio.h>

/**
 * main - number of arguments passed into
 *
 * @argc: size of argv
 *
 * @argv: string of arguments
 *
 * Return: number of arguments
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
