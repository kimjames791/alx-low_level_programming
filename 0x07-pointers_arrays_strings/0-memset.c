#include "main.h"

/**
 * _memset - fills mem with constant byte
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of bytes to be filled
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k;

	k = 0;
	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
