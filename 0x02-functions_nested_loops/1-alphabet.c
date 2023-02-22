#include "main.h"

/**
 * main- prints alphabetical letters
 * Return:Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
