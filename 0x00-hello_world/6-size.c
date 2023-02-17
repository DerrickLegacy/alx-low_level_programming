#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %2d", sizeof(char));
	printf("Size of an int: %2d", sizeof(int));
	printf("Size of a long int: %2d", sizeof(long int));
	printf("Size of a long long int: %2d", sizeof(long long int));
	printf("Size of a float: %2d", sizeof(float));
	return (0);
}
