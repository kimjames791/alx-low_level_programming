#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: ointer to the string.
 * @c: Character to be located.
 * Return: Pointer to the first occurence of 'c' or NULL if 'c' is not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] != '\0'; i++)
		if (s[i] == c)
		return (s + i);
	if (s[i] == c)
	return (s + i);
	return ('\0');
}
