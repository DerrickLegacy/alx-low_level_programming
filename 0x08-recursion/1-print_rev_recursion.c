#include "main.h"

/**
 * _print_rev_recursion - Prints the reverse string
 * @s: the input to our function
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		/* Move to the last eleent */
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
