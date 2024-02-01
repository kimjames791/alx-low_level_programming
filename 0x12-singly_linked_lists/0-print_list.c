#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of the linkedlist.
 * @h: linked list of the function
 *
 * Return: number of nodes printed.
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
