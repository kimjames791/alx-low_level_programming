#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string
 * Return: 0 always om success
 */

void print_rev(char *s)
{
	int longi 0;
	int q;

	while (*s != '\0')
	{
		longi++;
		q++
	}
	q--;
	for (q = longi; q > 0; q--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n);
}
