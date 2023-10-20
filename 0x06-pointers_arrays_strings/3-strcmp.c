#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals, non-zero  if not equal.
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0, result = 0;

	while (result == 0)
	{
		if ((s1[index] == '\0') && (s2[index] == '\0'))
		{
			break;
		}
		result = s1[index] - s2[index];
		index++;
	}
	return (result);
}
