#include <stdio.h>

/**
 * main - a program that prints the size of various computer types
 * Return: return 0 always on success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of char: %d byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int : %d byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float int: %d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
