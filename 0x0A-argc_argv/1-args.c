#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 *
 * @argc: argument count
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
