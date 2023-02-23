#include "main.h"

/**
 * print_most_numbers - prints from 0-9 exclusive of 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if ((i == 2) | (i == 4))
			continue;
		_putchar((1 % 10) + '0');
	}
	_putchar('\n');
}
