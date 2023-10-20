#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: Fisrt number.
 * @n2: Second number.
 * @r: buffer to store the result.
 * @size_r: buffer size.
 * Return: results, 0 if results cannot be stored.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, sum, larger, digit1, digit2, carry = 0;

	while (n1[c1] != '\0')
		c1++;
	while (n2[c2] != '\0')
		c2++;
	if (c1 >= c2)
		larger = c1;
	else
		larger = c2;
	if (size_r <= larger + 1)
		return (0);
	r[larger + 1] = '\0';
	c1--, c2--, size_r--;
	digit1 = n1[c1] - 48, digit2 = n2[c2] - 48;
	while (larger >= 0)
	{
		sum = digit1 + digit2 + carry;
		if (sum >= 10)
			carry = sum / 10;
		else
			carry = 0;
		if (sum > 0)
			r[larger] = (sum % 10) + 48;
		else
			r[larger] = '0';
		if (c1 > 0)
			c1--, digit1 = *(n1 + c1) - 48;
		else
			digit1 = 0;
		if (c2 > 0)
			c2--, digit2 = n2[c2] - 48;
		else
			digit2 = 0;
		larger--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
