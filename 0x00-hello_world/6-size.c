#include <stdio.h>

/**
 * main - Entry point
 * A program that prints the size of various types
 * of computer it is compiled and run on.
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("size of a char: %zu byte(s)\n", size of(c));
	printf("size of an int: %zu byte(s)\n", size of(i));
	printf("size of a long int: %zu byte(s)\n", size of(a));
	printf("size of a long long int: %zu byte(s)\n", size of(b));
	printf("size of a float: %zu byte(s)\n", size of(f));
	return(0);
}
