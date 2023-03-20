#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiledd from
 *
 * Return: ALways o
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
