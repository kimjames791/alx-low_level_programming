#include <stdio.h>
/**
 * main  - this is the main entry point
 * Return: return 0 on success
 */

int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
	putchar(k + '0');
	if (k < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);

}
