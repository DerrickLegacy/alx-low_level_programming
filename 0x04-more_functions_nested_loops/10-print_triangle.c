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
	int x;

	for (i = 1 ; i <= size ; i++)
	{
		/*creating space*/
		for (space = 1 ; space <= size ; space++)
		{
			_putchar(' ');
		}
		/*printing the stars*/
		for (x = i ; x <= space ; x++)
		{
			_putchar('#');
		}
	}
}
