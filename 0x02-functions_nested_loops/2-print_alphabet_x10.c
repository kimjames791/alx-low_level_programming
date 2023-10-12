#include "main.h"
/**
 * main - this is the main entry point
 *
 * prints alphabet
 *
 * Return: always 0.
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
