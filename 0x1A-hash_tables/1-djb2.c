#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_djb2 - A hash function with the djb2 algorithm
  * @str: The value to which the function returns
  *
  * Return: The number representing the given strin.g
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int z;

	hash = 5381;
	while ((z = *str++))
	{
		hash = ((hash << 5) + hash) + z; /* hash * 33 + z */
	}
	return (hash);
}
