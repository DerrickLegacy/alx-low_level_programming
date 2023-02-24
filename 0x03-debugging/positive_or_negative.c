#include "main.h"

/**
 * positi_or_negative- Finds the positive or negative of a value
 * @n: value to be tested.
 *
 * Return: Always 0 (Success)
 */

int positi_or_negative(int n)
{
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
