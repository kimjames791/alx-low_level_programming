#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a double linked lists
 * @h: Double linked list to prints
 *
 * Return: Number of nodes of the double linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}

	return (length);
}
