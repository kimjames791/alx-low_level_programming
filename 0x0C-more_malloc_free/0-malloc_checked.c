#include <stdlib.h>


/**
 * *malloc_checked - allocates memory using malloc and exit if fails
 * @b:an int
 * Return: pointer to array initialized or NULL.
 */

void *malloc_checked(unsigned int b)
{
	int *k = malloc(b);

	if (k == 0)
		exit(98);

	return (k);
}
