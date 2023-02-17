#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * main-entry for all my functions at run time
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*my code to determine where a given value belongs*/
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);

}
