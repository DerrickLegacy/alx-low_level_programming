#include "main.h"

/**
 * print_square - Prints a square followed by a new line.
 * @size: The size of square
 * Return: Always 0 in the main.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
