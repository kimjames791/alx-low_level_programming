#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - add  node at the end of linked lists
 * @head: The char to be printed
 * @str: string for the new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new_node;
	int k;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	for (k = 0; str[k] != '\0'; k++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = k;
	new_node->next = NULL;

	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
