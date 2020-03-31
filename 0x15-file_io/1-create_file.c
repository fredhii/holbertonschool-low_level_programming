#include "holberton.h"
/**
 * create_file - Creates a file.
 * @filename: File to create
 * @text_content: Text to insert in file
 * Return: 1 Success, -1 Failed
 */
int create_file(const char *filename, char *text_content)
{
	int openn, writee, size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (; text_content[size]; size++)
			;
	openn = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	writee = write(openn, text_content, size);

	if (openn == -1 || writee == -1)
		return (-1);
	close(openn);

	return (1);
}
