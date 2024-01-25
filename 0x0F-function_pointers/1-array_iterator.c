#include "function_pointers.h"

/**
 * array_iterator - implements a function given as a parameter on each
 * element of an array
 * @array:an  array of integer
 * @size:the size of array
 * @action:the function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
{
	for (i = 0; i < size; i++)
		action(array[i]);
}
}
