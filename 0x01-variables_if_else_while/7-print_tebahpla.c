#include <stdio.h>
/**
 *  main - this is the main entry point
 *  Return: return 0 always on success
 */

int main(void)
{
	char d;

	d = 'z';
	while (d >= 'a')
	{
	putchar(d);
	d--;
	}
	putchar('\n');
	return (0);
}

