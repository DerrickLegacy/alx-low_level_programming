#include "main.h"

/**
 * _strcmp - Similar to the comparison function in the c library
 * @s1: First comparison Value for our function
 * @s2: Second comparison value for our function.
 * Return: Returns a value given a specified condition.
 */
int _strcmp(char *s1, char *s2)
{	
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			return (0);
		}
		if (*s1 > *s2)
		{
			return (15);
		}
		if (*s1 < *s2)
		{
			return (-15);
		}
	}
	return (0);
}
