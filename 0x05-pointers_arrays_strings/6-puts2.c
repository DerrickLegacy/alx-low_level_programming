#include "main.h"

/**
 * puts2 - Prints even characters
 * @str: Input to the function
 */

void puts2(char *str)
{	int i;
	int length;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		length++;
	}
	for (i = 0 ; i < length ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
