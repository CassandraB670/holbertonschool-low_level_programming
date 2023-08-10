#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @text_content: text will be print in the file
 *
 * @filename: file for work
 *
 * Return: 1 if succed, -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDirectory;
	int length;
	int writeContent;

	if (filename == NULL)
		return (-1);
	fileDirectory = open(filename, O_WRONLY | O_APPEND);

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
