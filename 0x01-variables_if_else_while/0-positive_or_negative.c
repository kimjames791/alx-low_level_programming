#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -determine in a random number is positive, negative or zero
 *
 * return: 0 on success
 */
int main(void)
{
	int n;
	srand(time(0));
	n =rand() -RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
                printf("%i is positive\n", n);
        else if (n == 0)
                printf("%i is zero\n", n);
        else
                printf("%i is negative\n", n);
        return (0);
}	
	

	

	

	

	

	


}
		




