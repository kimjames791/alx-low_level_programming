#include <stdio.h>
/**
 *main-print number it receives
 *@argc:number of arguments passed
 *@argv:pointer to an array of arguments.
 *Return:0-success always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
