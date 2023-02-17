#include <stdio.h>

/**
 * main - Entry point
 * A program that prints the size of various types
 * of computer it is compiled and run on.
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("size of a char: %d byte(s)\n", Sizeof(char));
	printf("size of an int: %d byte(s)\n", Sizeof(int));
	printf("size of a long int: %d byte(s)\n", Sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", Sizeof(long long int));
	printf("size of a float: %d byte(s)\n", Sizeof(float));
	return (0);
}
