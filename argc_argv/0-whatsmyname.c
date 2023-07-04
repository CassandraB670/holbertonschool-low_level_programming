#include "main.h"
#include <stdio.h>

/**
 * main - fonction for print the program's name
 *
 * @argc: size of argv
 *
 * @argv: string we want to return
 *
 * Return: Name of the program
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
