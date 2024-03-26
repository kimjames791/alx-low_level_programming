#include "main.h"
/**
 * *_memcpy - copies memory area in the prog
 * @dest: memory area
 * @src: source
 * @n: length of src
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		dest[p] = src[p];
	}
	return (dest);
}
