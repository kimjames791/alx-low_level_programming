#include <stdio.h>

/**
 * main - Entry point
 *Description: to computes and print sum of multiples of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
	int r, sum = 0;

	for (r = 0; r < 1024; r++)
	{
		if ((r % 5) == 0 || (r % 3) == 0)
			sum += r;
	}
	printf("%d\n", sum);
	return (0);
}
