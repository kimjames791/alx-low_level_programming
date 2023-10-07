#include <stdio.h>
#include <ctype.h>
/**
 * main- entry point
 * Description: A program that prints lowercase alphabets
 * Return:0 if success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	putchar(c);
	for (c = 'A'; c <= 'Z' ; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
