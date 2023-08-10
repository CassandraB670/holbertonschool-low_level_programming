#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @text_content: text will be print in the file
 *
 * @filename: file will be create
 *
 * Return: 1 if successed, -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int fileDirectory;
	int length;
	int writeContent;

	if (filename == NULL)
		return (-1);

	fileDirectory = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fileDirectory == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			continue;
		writeContent = write(fileDirectory, text_content, length);
		if (writeContent == -1)
		{
			close(fileDirectory);
			return (-1);
		}
	}
	close(fileDirectory);
	return (1);
}
