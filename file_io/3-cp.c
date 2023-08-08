#include "main.h"

/**
 * error_exit - print an error message and exit
 *
 * @exitCode: exit code to use
 *
 * @message: error message
 *
 * @nameFile: file with the error
 */

void error_exit(int exitCode, const char *message, const char *nameFile)
{
	dprintf(STDERR_FILENO, message, nameFile);
	exit(exitCode);
}

/**
 * main - function that copies file's content into an another
 *
 * @argc: number of arguments
 *
 * @argv: array that contents arguments
 *
 * Return: 0 or -1
 */

int main(int argc, char *argv[])
{
	int startFile;
	int endFile;
	int readFile;
	int writeFile;

	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");
	startFile = open(argv[1], O_RDONLY);
	if (startFile == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	endFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (endFile == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	while ((readFile = read(startFile, buffer, sizeof(buffer))) > 0)
	{
		writeFile = write(endFile, buffer, readFile);
		if (writeFile != readFile)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (readFile == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	if (close(startFile) == -1)
		error_exit(100, "Error: Can't close fd %d\n", "");
	if (close(endFile) == -1)
		error_exit(100, "Error: Can't close fd %d\n", "");
	return (0);
}
