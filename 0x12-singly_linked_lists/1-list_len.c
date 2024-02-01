#include "lists.h"
#include <stdio.h>

/**
 * list_len -  returns number of elements in linked list_t list
 * @h: linked lists in func
 *
 * Return: number of elements seen
 */

size_t list_len(const list_t *h)
{
	size_t nbr_element = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nbr_element++;
	}
	return (nbr_element);
}
