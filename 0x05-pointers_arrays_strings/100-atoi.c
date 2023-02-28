#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: input to the function to be converted to int
 * Return: Returns a generated number with a sign.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int number = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');

		else if (number > 0)
			break;

	} while (*s++);

	return (number * sign);
}
