#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_print - Prints a hash table made
  * @ht: The hash table to b printed
  *
  * Return: Nothing! on success
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int k = 0;
	short pr_commas = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (; k < ht->size; ++k)
	{
		node = ht->array[k];

		while (node)
		{
			if (pr_commas == 1)
				printf(", ");

			pr_commas = 1;
			printf("'%s': '%s'", (char *) node->key,
								(char *) node->value);

			node = node->next;
		}
	}

	printf("}\n");
}
