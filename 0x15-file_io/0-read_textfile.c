#include "holberton.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file.
 * @filename: File to read
 * @letters: Number of letter in file
 * Return: 0 failed, text length in success.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openn, readd, writee;
	char *file;

	if (filename == NULL)
		return (0);
	file = malloc(sizeof(char) * letters);
	if (file == NULL)
		return (0);

	openn = open(filename, O_RDONLY);
	readd = read(openn, file, letters);
	writee = write(STDOUT_FILENO, file, readd);

	if (openn == -1 || readd == -1 || writee == -1 || writee != readd)
		return (free(file), 0);
	free(file);
	close(openn);

	return (writee);
}
