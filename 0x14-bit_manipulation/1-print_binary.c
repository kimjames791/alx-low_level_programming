#include "main.h"

/**
 * _pow - calculate (base ^ power)
 * @base: base of the exponent in func
 * @power: power of the exponent in the func
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int k;

	num = 1;
	for (k = 1; k <= power; k++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints  number in binary notation.
 * @n: number to b printed 
 *
 * Return: void upon success
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
