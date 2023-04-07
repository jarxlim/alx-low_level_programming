#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and 
 * prints it to the POSIX standard output.
 *
 * @filename: a pointer to the name of the file to read
 * @letters: the number of the letters to read and print
 *
 * Return: 0, if filename is NULL,nor can not be opened or read,
 * nor if write fails
 * otherwise, returns the actual number of letters it reads & prints
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wr;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		buffer = malloc(sizeof(char) * letters);
	}

	if (buffer == NULL)
	{
		return (0);
	}
	else
	{
		opn = open(filename, O_RDONLY);
		rd = read(opn, buffer, letters);
		wr = write(STDOUT_FILENO, buffer, rd);
	}

	if (opn == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}
	else
	{
		free(buffer);
		close(0);
	}
	return (wr);
}
