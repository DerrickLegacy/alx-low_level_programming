#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from specified n value to 98.
 * @n: the value from which to print
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
}
