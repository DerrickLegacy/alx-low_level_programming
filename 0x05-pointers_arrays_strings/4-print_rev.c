#include "main.h"

/**
 * print_rev - Prints the reverse of a string
 * @s: The input to our function
 */

void print_rev(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	char temp;

	for (int i = 0 ; i < middle ; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
	puts(s);
}
