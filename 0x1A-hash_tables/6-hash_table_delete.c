#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_delete - Deletes  hash table
  * @ht: The hash table to be delated
  *
  * Return: Nothing! on success
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int k = 0;
	hash_node_t *node = NULL, *temp = NULL;

	if (ht && ht->size && ht->array)
	{
		for (; k < ht->size; ++k)
		{
			node = ht->array[k];

			if (node)
			{
				if (node->next)
				{
					node = node->next;
					while (node)
					{
						temp = node;
						node = node->next;
						free(temp->key);
						free(temp->value);
						free(temp);
					}
				}

				node = ht->array[k];
				if (node->key && node->value)
				{
					free(node->key);
					free(node->value);
				}
			}

			free(node);
		}

		free(ht->array);
		free(ht);
	}
}
