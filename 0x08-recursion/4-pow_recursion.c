#include "main.h"

/**
 * _pow_recursion - finds the value of a number powered by a  number y
 * @x: the number whose power is to be foun d
 * @y: The number to be raised on x.
 * Return: 1 for @y == 0;-1 for y <0
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		result  = result * _pow_recursion(x, y - 1);
		return (result);
	}
}
