#include "main.h"
/**
 * rot13 - Encodes a string using rot13 cipher.
 * @s: string to be encoded.
 * Return: Pointer to the encoded string
 */

char *rot13(char *s)
{
	int index = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[index] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[index] == alphabet[i])
			{
				s[index] = rot13[i];
				break;
			}
		}
		index++;
	}
	return (s);
}
