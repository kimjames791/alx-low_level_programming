#include "main.h"
/**
 * _strncat - concatenates two strings up to n number of characters
 * @dest: destination string
 * @src: source string
 * @n: number of characters to concatenate
 * Return: Pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, src_index = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
		while (src_index < n)
	{
		dest[dest_len] = src[src_index];
		if (src[src_index] == '\0')
		{
			break;
		}
		dest_len++;
		src_index++;
	}
		return (dest);
}
