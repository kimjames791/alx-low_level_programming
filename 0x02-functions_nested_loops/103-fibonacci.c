#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints sum of even-value numbers bellow 4million
 * Return: 0 for success
 */

int main(void)
{
	unsigned long int Fib1 = 0, Fib2 = 1, sum = 0;
	unsigned long int total_sum = 0;

	while (1)
	{
		sum = Fib1 + Fib2;
		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			total_sum += sum;
		Fib1 = Fib2;
		Fib2 = sum;
	}
	printf("%lu\n", total_sum);
	return (0);
}
