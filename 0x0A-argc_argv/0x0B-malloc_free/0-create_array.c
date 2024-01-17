#include <stdlib.h>

/**
 * *create_array - makes an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: specific char to initialize
 * Return: pointer to the array initialized or void
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
		return (0);
	while (size--)
		p[size] = c;
	return (p);
}
