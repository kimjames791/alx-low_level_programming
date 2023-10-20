#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed
 */
void print_number(int n)
{
	unsigned int magnitude, divisor, digit;


	if (n < 0)
	{
		_putchar(45);
		magnitude = -n;
	}
	else
	{
		magnitude = n;
	}

	divisor = magnitude;
	digit = 1;

	while (divisor > 9)
	{
		divisor /= 10;
		digit *= 10;
	}

	for (; digit >= 1; digit /= 10)
	{
		_putchar(((magnitude / digit) % 10) + 48);
	}
}
