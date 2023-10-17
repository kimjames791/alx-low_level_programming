#include "main.h"
/**
 * _puts - prints a string,followed by a new line to stdout
 * @str: string print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{

		puts(*str++);
	}
		_putchar('\n');
}
