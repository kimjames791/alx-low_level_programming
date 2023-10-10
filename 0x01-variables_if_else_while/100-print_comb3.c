#include <stdio.h>
/**
 * main - this is a function to print combination of two numbers
 * Return: 0 always on success
 */

int main(void)
{
	int k = '0';
	int b = '0';

	while (k <= 9)
	{
	while (b <= 9)
	{
	if (!(k > b) || k == b)
	{
	putchar(k);
	putchar(b);
	{
	putchar('\n');
	}
	putchar(',');
	putchar(' ');
	}
	}
	b++;
	}
	b = '0';
	k++;
	return ('0');
}
