#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a callback function.
 *
 * @name: A pointer to the name to be printed.
 * @f: A pointer to the function that will print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}