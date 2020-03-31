#include "holberton.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: File to attach
 * @text_content: Text to append in file
 * Return: 1 Success, -1 Failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openn, writee, size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (; text_content[size]; size++)
			;
	openn = open(filename, O_WRONLY | O_APPEND);
	writee = write(openn, text_content, size);

	if (openn == -1 || writee == -1)
		return (-1);
	close(openn);

	return (1);
}
