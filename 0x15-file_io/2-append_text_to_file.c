#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * Return 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wr, len;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		opn = open(filename, O_WRONLY | O_APPEND);
	}

	if (opn == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0';)
			len++;

		wr = write(opn, text_content, len);

		if (wr == -1 || wr != len)
		{
			close(opn);
			return (-1);
		}
	}
	else
	{
		close(opn);
	}
	return (1);
}
