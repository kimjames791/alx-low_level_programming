#include "main.h"

/**
 * _isdigit - A function that checks for a digit.
 * @c: An input integer
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	char k = '0';
	int isdigit = 0;

	for (; k <= '9'; k++)
	{
		if (k == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
