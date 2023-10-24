#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: double pointer to the source address.
 * @to: Pointer to the tartget address.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
