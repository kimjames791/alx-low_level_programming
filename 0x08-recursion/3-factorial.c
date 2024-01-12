#include "main.h"
/**
 * factorial - finds the factorial of a given nimber
 * @n: - parameter name
 * Return: a given factorial
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));
}
