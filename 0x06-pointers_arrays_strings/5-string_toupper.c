#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: String to convert.
 * Return: Pointer to the resulting string.
 */

char *string_toupper(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		if (s[k] >= 'a' && s[k] <= 'z')
		{
			s[k] = s[k] - ('a' - 'A');
		}
		k++;
	}
	return (s);
}
