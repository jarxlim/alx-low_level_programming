#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *add_buffer(char *filename);
void can_close(int fd_value);

/**
 * add_buffer - creates bytes space for a buffer.
 * @filename: name of the file for storage
 * Return: the created buffer.
 */
char *add_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * can_close - checks if the file can be closed
 * @fd_value: is the value of the file descriptor
 */
void can_close(int fd_value)
{
	int close_file;

	close_file = close(fd_value);

	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
		exit(100);
	}
}

/**
 * main - the main function
 * @argc: number of arguments 
 * @argv: array of pointer to the arguments.
 * Return: 0 on success.
 *
 * Description: if argument number is not the correct one, exit with code 97
 * if file_from does not exist or cant be read exit with code 98.
 * if file_to fails exit with code 99.
 * if you can not close a file descriptor , exit with code 100
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else
	{
		buffer = add_buffer(argv[2]);
		file_from = open(argv[1], O_RDONLY);
		rd = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	}

	do {
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(file_to, buffer, rd);
		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	can_close(file_from);
	can_close(file_to);

	return (0);
}
