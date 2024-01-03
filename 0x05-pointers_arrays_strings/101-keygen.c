#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random passwords for 101
  * Return: 0
  */
int main(void)
{
	int sum;
	char d;

	srand(time(NULL));
	while (sum <= 2645)

	{
		d = rand() % 128;
		sum += d;
		putchar(d);
	}
	putchar(2772 - sum);
	return (0);
}

