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
printf("size of char: %i byte(s)\n", (unsigned long)sizeof(a));
printf("size of int : %i byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %i byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %i byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float int: %i byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
