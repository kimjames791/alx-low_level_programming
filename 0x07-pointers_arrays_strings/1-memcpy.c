#include "main.h"

/**
 * _memcpy - a function that copies mem area
 * @dest: memory stored
 * @src: memory where is copied
 * @n: number of bytes to be copied
 *
 * Return: copied mem with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
