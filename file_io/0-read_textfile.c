#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard outpot
 *
 * @letters: number of letters it should read and print
 *
 * @filename: name of the file to read
 *
 * Return: actual number or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileDirectory;
	ssize_t readFile;
	ssize_t writeFile;

	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fileDirectory = open(filename, O_RDONLY);
	if (fileDirectory == -1)
	{
		free(buffer);
		return (0);
	}
	readFile = read(fileDirectory, buffer, letters);
	if (readFile == -1)
	{
		free(buffer);
		close(fileDirectory);
		return (0);
	}
	writeFile = write(STDOUT_FILENO, buffer, readFile);
	if (writeFile == -1 || writeFile != readFile)
	{
		free(buffer);
		close(fileDirectory);
		return (0);
	}
	free(buffer);
	close(fileDirectory);
	return (writeFile);
}
