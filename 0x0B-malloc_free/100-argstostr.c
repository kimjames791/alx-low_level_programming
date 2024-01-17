#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find length of a string
 * @s: string
 * Return:an int
 */


int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * *argstostr - described
 * @ac: int
 * @av: arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int k = 0, nc = 0, j = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; k < ac; k++, nc++)
		nc += _strlen(av[k]);
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);
	for (k = 0; k < ac; k++)
{
	for (j = 0; av[k][j] != '\0'; j++, cmpt++)
		s[cmpt] = av[k][j];
	s[cmpt] = '\n';
	cmpt++;
}
s[cmpt] = '\0';

return (s);
}
