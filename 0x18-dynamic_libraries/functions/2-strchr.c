#include "main.h"
/**
 * *_strchr - fills memory with constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int p;

	for (p = 0; s[p] >= '\0'  ; p++)
	{
		if (s[p] == c)
		{
			return (s + p);
		}
	}

	return ('\0');
}
