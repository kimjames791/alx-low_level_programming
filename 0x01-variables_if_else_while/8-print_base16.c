#include <stdio.h>
/**
 * main - this is the entry point
 * Return: 0 always on success
 */

int main(void)
{
	int d;

	char a;

	d = 0;
	a = 'a';
	while (d <= 9)
	{
	putchar(d + '0');
	d++;
	}
	while (a <= 'f')
	{
	putchar(a);
	a++;
	putchar('\n');
	}
	return (0);
}
