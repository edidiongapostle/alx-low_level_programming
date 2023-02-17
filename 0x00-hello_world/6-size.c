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

	printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a float: %lu byte(s)\n", unsigned long()sizeof(f));
	return (0);
}
