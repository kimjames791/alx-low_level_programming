#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 *  @s: - parameter name
 *  Return: return srting
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (s + _strlen_recursion(s + 1));
	}
}

