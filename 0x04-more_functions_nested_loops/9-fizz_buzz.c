#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for all our functions
 * Return: Always 0.
 * more_functions_nested_loops - prints the numbers from 1 to 100,
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
