#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: Pointer to the input string.
 */
void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
}
