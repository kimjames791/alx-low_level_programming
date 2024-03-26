#include "main.h"
/**
 * _strlen - find the length of the string
 * @s: pointer to the string to check
 * Return: void
*/


int _strlen(char *s)
{
	int n = 0;

	while (s[n])
		n++;

	return (n);
}
