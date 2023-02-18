#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char my_alpha;

	for (my_alpha = 'a' ; my_alpha <= 'z' ; my_alpha++)
	{
		putchar(my_alpha);
	}
	putchar('\n');
	return (0);
}
