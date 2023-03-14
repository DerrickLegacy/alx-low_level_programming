#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - adds up numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always zero for success
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum;
	char *m;

	if (argc == 0)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			m = argv[i];
			for (j = 0 ; j < strlen(m) ; j++)
			{
				if (m[j] < 48 || m[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(m);
			m++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
