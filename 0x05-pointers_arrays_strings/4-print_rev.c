#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string
 * Return: 0 always om success
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	while (a--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
