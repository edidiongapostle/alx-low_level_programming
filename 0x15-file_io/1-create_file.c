#include "main.h"
/**
 * create_file - function creates a file
 *
 * @filename: name of file to be created
 *
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int elly;
	int len;
	ssize_t ret;

	if (filename == NULL)
	{
		return (-1);
	}

	elly = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (elly == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		ret = write(elly, text_content, len);

		if (ret != len)
		{
			close(elly);
			return (-1);
		}
	}

	close(elly);
	return (1);
}
