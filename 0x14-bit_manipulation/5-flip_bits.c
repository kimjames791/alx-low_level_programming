#include "main.h"

/**
 * flip_bits - number of different bits between two numbers to be checked
 * @n: first number of bits
 * @m: second number of bits
 *
 * Return: number of bits needed to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check;
	unsigned int count, k;

	count = 0;
	check = 1;
	diff = n ^ m;
	for (k = 0; k < (sizeof(unsigned long int) * 8); k++)
	{
		if (check == (diff & check))
			count++;
		check <<= 1;
	}
	return (count);
}
