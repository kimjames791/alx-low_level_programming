#include "main.h"

/**
 * print_numbers - function that prints digits from 0 to 9
 * Return: 0 always on success
 */
void print_numbers(void)
{
	int c = 48;

	for (; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
