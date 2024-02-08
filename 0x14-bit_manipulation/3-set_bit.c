#include "main.h"

/**
 * set_bit - sets the value of  bit to one at a given index.
 * @n: number to set the bit
 * @index: index at which to set bit in comp
 *
 * Return: 1 upon success, or -1 if an error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
