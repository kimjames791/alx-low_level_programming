#include "main.h"
/**
 * *_strcpy -  copies the string pointed to src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int m = -1;

	do {
		m++;
		dest[m] = src[m];
	} while (src[m] != '\0');

	return (dest);
}
