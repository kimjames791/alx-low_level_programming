#include "main.h"
/**
 * *_strncpy - copies the string pointed to src.
 *
 * @dest: pointer to the buffer in the prog
 * @src: pointer to the source string.
 * @n: length of src.
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	for (; k < n; k++)
		dest[k] = '\0';
	return (dest);
}
