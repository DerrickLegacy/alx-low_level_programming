#include "main.h"

/**
 * print_line - prints lines using the _
 * @n: The number of times to print the line
 *
 * Return: Lines
 */
void print_line(int n)
{
	int i;

	if ((n > 0))
	{
		for (i = 0 ; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('$');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
