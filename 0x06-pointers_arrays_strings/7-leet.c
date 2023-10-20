#include "main.h"
/**
 * leet - Encodes a string into 1337 language
 * @s: String to be encoded
 * Return: Pointer to the encoded string
 */

char *leet(char *s)
{
	int index = 0, i;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int leet_num[] = {52, 51, 48, 55, 49};

	while (s[index] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[index] == lower[i] || s[index] == upper[i])
			{
				s[index] = leet_num[i];
				break;
			}
		}
		index++;
	}
	return (s);
}
