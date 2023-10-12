#include "main.h"
/**
 * main - this is the main function print_alphabet_x10 - prints alphabet in lowercase 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alph;
	int n;

	for (n = 0; n < 10; n++)
	{
	for (alph = 'a'; alph <= 'z'; alph++)
	{
	_putchar(alph);
	}
	_putchar('\n');
	}
}
