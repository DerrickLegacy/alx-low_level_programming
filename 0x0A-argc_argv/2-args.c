#include "main.h"
#include <stdio.h>

/**
 * main - Printseach passed argument on a new line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
