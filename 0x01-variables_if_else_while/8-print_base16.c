#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{       int x;
	char hexa;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar(x + '0');
	}
	for (hexa = 'a' ; hexa <= 'f' ; hexa++)
	{
		putchar(hexa);
	}
	putchar('\n');
	return (0);
}
