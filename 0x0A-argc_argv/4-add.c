#include <stdio.h>
#include <stdlib.h>
/**
 * isInteger - looks if s is an integer
 * @s: string to check
 * Return: one or zero
 */

int isInteger(const char *s)
{
	int k = 0;

	while (s[k] != '\0')
{
	if (s[k] < '0' || s[k] > '9')
	return (1);
	i++;
}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: list
 * Return:  always
 */

int main(int argc, char const *argv[])
{
	int sum = 0;
	while (--argc)
{
	if (isInteger(argv[argc]))
	{
		printf("Error\n");
		return (1);
	}
	sum += atoi(argv[argc]);
}
	printf("%i\n", sum);

	return (0);
}
