#include "main.h"

/**
 * more_numbers - function thst prints ten times the3 numbers
 * followed by a new line
 */

void more_numbers(void)
{
	int p, q;

	for (p = 0; p < 10; p++)
	{
	for (q = 0; q < 15; q++)
	{
	if (q >= 10)
	_putchar(q / 10 + '0');
	_putchar(q % 10 + '0');
	}
	_putchar('\n');
	}
}
