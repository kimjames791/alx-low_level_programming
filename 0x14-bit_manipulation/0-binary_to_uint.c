#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointer to string containing a binary number converted
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		num <<= 1;
		if (b[k] == '1')
			num += 1;
	}
	return (num);
}
