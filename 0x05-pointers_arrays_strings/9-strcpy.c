#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to dest
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int k = -1;

	do {
		k++;
		dest[k] = src[k];
	} while (src[k] != '\0');

	return (dest);
}
