#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the initial segment string.
 * @accept: Pointer to the string of accepted bytes.
 * Return: The number of accepted bytes in the initial segement of 's'.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 0;
				break;
			}
		}
		if (found == 1)
			break;
	}
	return (i);
}
