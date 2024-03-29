#include "main.h"
/**
 * _strpbrk -looks for a string for any of a set of bytes.
 * @s: string
 * @accept: string to match on the func
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int l, j;
	char *p;

	l = 0;
	while (s[l] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[l])
			{
				p = &s[l];
				return (p);
			}
			j++;
		}
		l++;
	}

	return (0);
}
