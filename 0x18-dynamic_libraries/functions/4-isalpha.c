#include "stdio.h"

/**
 * _isalpha - checks for lower case letter
 * @c : character to check
 * Return: 0 or 1 if success
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}
