#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int index;

	for (index = 0; index < n ; index++)
	{
		a[index] = a[n - index - 1];
	}
}
