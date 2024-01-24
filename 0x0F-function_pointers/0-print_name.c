#include "function_pointers.h"

/**
 * print_name - prints  name
 * @name: the string
 * @f: function used
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
