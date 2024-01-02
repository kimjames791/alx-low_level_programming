#include "main.h"
/**
 * print_most_numbers - function thst checks for a digit from 0 to 9
 * Return: 0 always on success
 */

void print_most_numbers(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
	if (d != 50 && d != 52)
	{
	_putchar(d);
	}
	}

	_putchar('\n');
}
