#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to search for.
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, p;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (p = 0; needle[p] != '\0'; p++)
		{
			if (haystack[i + p] != needle[p])
				break;
		}
		if (needle[p] == '\0')
		return (haystack + i);
	}
	return ('\0');
}
