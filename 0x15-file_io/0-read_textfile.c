#include "main.h"
/**
 *read_textfile - function reads a textfile and prints it to the POSIX stdout
 *
 *@filename: name of the file
 *
 *@letters: letters is the number of letters it should read and print
 *
 * Return: read and printed chars, or 0 if unsucessful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read, bytes_written;
	int fd;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
	free(buffer);
	close(fd);
	return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
	free(buffer);
	close(fd);
	return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_written);
}
