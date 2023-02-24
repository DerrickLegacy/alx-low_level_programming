#include "main.h"

/**
 * print_diagonal - Creates a diagonal line.
 * @n: the number of times the character \ is printed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
				for (j = 0 ; j < (n - 1) ; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
