#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array.
 * @n: number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int p, j, temp;

	for (p = 0; p < n - 1; p++)
	{
		for (j = p + 1; j > 0; j--)
		{
			temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
		}
	}
}
