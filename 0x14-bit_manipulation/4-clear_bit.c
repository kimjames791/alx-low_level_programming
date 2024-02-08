#include "main.h"

/**
 * clear_bit - sets the value of a bit to zero at a given index.
 * @n: number to set the bit
 * @index: index at which to set a bit
 *
 * Return: 1 if it works, or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
