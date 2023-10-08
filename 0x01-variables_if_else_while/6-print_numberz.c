#include <stdio.h>
/**
 *  main -this is the main entry point
 *  Return: 0 always on success
 */

int main(void)
{
	int k;

	k = 0;
	while (k <= 9)
	{
	putchar(k + '0');
	k++;
	}
	putchar('\n');
	return (0);
}
