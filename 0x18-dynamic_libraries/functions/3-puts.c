#include "main.h"
/**
 * _puts - prints astring amd, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/


void _puts(char *str)
{
	int k = 0;

	while (str[k])
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
