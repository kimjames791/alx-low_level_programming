#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p, j;

	for (p = 0; s[p] != '\0'; p++)
	{
		for (j = 0; accept[j] != s[p]; j++)
		{
			if (accept[j] == '\0')
				return (p);
		}
	}
	return (p);
}
