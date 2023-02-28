#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array -prints the array elements
 * @a: the pointer to the array address
 * @n: the number of array elements
 */
void print_array(int *a, int n)
{	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i < n-1)
			printf(", ");
		else
			break;
	}
	printf("\n");
}
