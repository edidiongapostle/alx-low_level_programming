#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * create_file - a function that creates a file
 *
 * @filename: name of the file to create
 * @text_content: string to write to the file, or NULL to create an empty file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, res, len;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++);
		res = write(file, text_content, len);
		if (res == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
