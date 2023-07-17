#include "main.h"
/**
 * error_exit - prints an error message to standard error and exits
 * @msg: error message to be printed
 * @exit_code: exit code to use when exiting
 */
void error_exit(char *msg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
}

/**
 * copy - copies the contents of one file to another
 * @source: the file to copy from
 * @dest: the file to copy to
 */

void copy(int source, int dest)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	for (;;)
	{
		bytes_read = read(source, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			error_exit("Error: Can't read from file", 98);
		}
		if (bytes_read == 0)
		{
			break;
		}

		bytes_written = write(dest, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error_exit("Error: Can't write to file", 99);
		}
		if (bytes_written != bytes_read)
		{
			error_exit("Error: Write error", 99);
		}
	}
}
/**
 * main - entry point for the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;

	if (argc != 3)
	{
		error_exit("Usage: cp file_from file_to", 97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy(source_fd, dest_fd);

	if (close(source_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}

	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}

	return (0);
}
