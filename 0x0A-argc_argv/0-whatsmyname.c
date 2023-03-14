#include "main.h"
#include <stdio.h>

/**
 * main - the major function to run our program.
 * @argc: The size of the array containing the values of flags passed.
 * @argv: the array containing the passed arguments or flags.
 * Return: return zero when successful and an error otherwise
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
