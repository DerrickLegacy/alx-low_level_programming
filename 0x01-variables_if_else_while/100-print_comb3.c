#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0 ; x < 9 ; x++)
	{
		for (y = 1 ; y <= 9 ; y++)
		{
			if ((y == x) | (y < x))
				continue;
			putchar(x + '0');
			putchar(y + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
