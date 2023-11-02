#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints Fibonacci sequence
 * Return: 0 for success
 */

int main(void)
{
	unsigned long int i, c, n, c1, c2, n1, n2;

	c = 1;
	n = 2;

	printf("%lu", c);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", n);
		n = n + c;
		c = n - c;
	}
	c1 = c / 1000000000;
	c2 = c % 1000000000;
	n1 = n / 1000000000;
	n2 = n % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", n1 + (n2 / 1000000000));
		printf("%lu", n2 % 1000000000);
		n1 = n1 + c1;
		c1 = n1 - c1;
		n2 = n2 + c2;
		c2 = n2 - c2;
	}
	printf("\n");
	return (0);
}
