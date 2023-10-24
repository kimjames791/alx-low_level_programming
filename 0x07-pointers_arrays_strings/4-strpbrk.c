#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string being searched.
 * @accept: Pointer to set of bytes.
 * Return: Pointer to the first occurence of a matching byte in 's',
 * or NULL if none found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int p, j;

	for (p = 0; s[p] != '\0'; p++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[p] == accept[j])
				return (s + p);
		}
	}
	return ('\0');
}
