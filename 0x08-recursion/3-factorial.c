#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: The input value to the function.
 * Return: ) if a value fullfilling a given condition
 */
int factorial(int n)
{
	if (n < 0)

	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
