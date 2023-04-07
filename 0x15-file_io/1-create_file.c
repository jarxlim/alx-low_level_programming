#include "main.h"
#include <stdlib.h>

/**
 * create_file -  function that creates a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * (file can't be created, file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int opn, wr, len;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		opn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
	close(opn);

	return (1);
}
