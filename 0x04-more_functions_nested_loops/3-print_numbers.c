#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * followed by a new line
 * Return: Always 0 on suceess
 */
void print_numbers(void)
{
	int k = '0';

	for (; k <= '9'; k++)
		_putchar(k);
	_putchar('\n');
}
