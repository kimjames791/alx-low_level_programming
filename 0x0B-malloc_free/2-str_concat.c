#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find length of  string
 * @s: string
 * Return: an int
 */


int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, k;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (0);
	for (k = 0; k <= size1 + size2; k++)
{
	if (k < size1)
		m[k] = s1[k];
	else
		m[k] = s2[k - size1];
}
m[k] = '\0';
return (m);
}
