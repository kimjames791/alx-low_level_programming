#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: An integer to be printed
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
				if (n == 98)
					continue;
				printf(", ");
		}
		printf("\n");
	}
}
