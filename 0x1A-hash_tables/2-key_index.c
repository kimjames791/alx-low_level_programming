#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * key_index - Computes the index of  given key in hash table
  * @key: The given key for the hash table
  * @size: The size of  hash table
  *
  * Return: The index  key in a hash table
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
