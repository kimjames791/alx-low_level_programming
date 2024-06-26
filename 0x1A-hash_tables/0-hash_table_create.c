#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  * @size:The Size of array
  *
  * Return: A pointer to new created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int k = 0;
	hash_table_t *htable = NULL;
	hash_node_t **arr = NULL;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (; k < size; ++k)
		arr[k] = NULL;

	htable->size = size;
	htable->array = arr;

	return (htable);
}
