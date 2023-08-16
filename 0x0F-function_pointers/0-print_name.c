#include "function_pointers.h"

/**
 * print_name - prints a name using a certain function
 * @name: name
 * @f: pointer to function specified in main
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
