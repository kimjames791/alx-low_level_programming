#include "main.h"

/**
 * print_str  - Prints a string followed by a new line.
 * @str: Pointer to the string to print.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
