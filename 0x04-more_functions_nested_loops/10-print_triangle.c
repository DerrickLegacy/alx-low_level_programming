#include "main.h"

/**
 * print_triangle - prints a triangle of any size
 * @size: How big the triangle is to be
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i;
	int space;
	int hash;

	if (size > 0)
	{
		for (i = size ; i >= 1 ; i--)
		{
			for (space = 1 ; space < i ; space++)
			{
				_putchar('_');
			}
			for (hash = size ; hash >= i ; hash--)
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
