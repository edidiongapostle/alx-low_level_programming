#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 *
 * @filename: name of the file
 *
 * @text_content: NULL terminated string to add to end of file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t ret;
	ssize_t len;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		ret = write(file, text_content, len);
		if (ret != len)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
