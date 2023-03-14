#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int res1;
	int res2;
	int product;

	if (argc == 3)
	{
		res1 = atoi(argv[1]);
		res2 = atoi(argv[2]);
		product = res1 * res2;
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
