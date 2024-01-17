#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return a pointer to current allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0 always
 */

char *_strdup(char *str)
{
	int k = 0, size = 0;
	char *y;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	/*+1 on the size puts the end of string character*/
	y = malloc(size * sizeof(*str) + 1);
	if (y == 0)
		return (NULL);
	else
{
	for (; k < size; k++)
		y[k] = str[k];
}
	return (y);
}
