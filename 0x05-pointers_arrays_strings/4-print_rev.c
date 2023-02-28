#include "main.h"

/**
 * print_rev - Prints the reverse of a string
 * @s: The input to our function
 */

void print_rev(char *s)
{
	int len = 0;
	int index;

	while (s[index++])
		len++;
	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
