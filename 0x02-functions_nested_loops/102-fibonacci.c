#include <stdio.h>
/**
 * main - Entry point
 * Description: program that prints the first 50 Fibonacci numbers from 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int Fib[50];

	Fib[0] = 1;
	Fib[1] = 2;
	printf("%ld, %ld, ", Fib[0], Fib[1]);

	for (i = 2; i < 50; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
		if (i == 49)
			printf("%ld\n", Fib[i]);
		else
			printf("%ld, ", Fib[i]);
	}
	return (0);
}
