#include <stdio.h>

/**
 * main - prints the number all arguments passed
 * @argc: arguments passed
 * @argv: list
 * Return: 0 always
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
{
	printf("%s\n", argv[i]);
	i++;
}
	return (0);
}
