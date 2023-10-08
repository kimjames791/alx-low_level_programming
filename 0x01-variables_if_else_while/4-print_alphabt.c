#include <stdio.h>
/**
 * main -this is the main entry point
 * Return: always return 0 on success
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
	if (c != 'e' && c != 'q')
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}

