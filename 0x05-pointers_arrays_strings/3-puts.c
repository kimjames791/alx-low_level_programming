#include "main.h"

/**
 * _puts - prints a string followed a new line
 * print_str  - Prints a string followed by a new line.
 * @str:- Pointer to the string to print.
 * Return: return void
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
