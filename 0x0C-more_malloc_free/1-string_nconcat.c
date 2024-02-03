#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: pointer to first string of the func
 * @s2: pointer to 2nd string of the func
 * @n: Number of bytes from n2 to be  concatenated.
 *
 * Return:Pointer to space in memory containing concatenated strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int k, j, s1_length, s2_length;

/*Check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/*Compute the length of the strings*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
/*Memory reservation-for case 1 & 2.*/
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
/*Copy first string into str.*/
	for (i = 0; s1[k] != '\0'; k++)
		str[k] = s1[k];
/*copy second stringg into str.*/
	for (j = 0; j < n; j++)
	{
		str[k] = s2[j];
		k++;
	}

	strk[k] = '\0';
	return (str);
}
