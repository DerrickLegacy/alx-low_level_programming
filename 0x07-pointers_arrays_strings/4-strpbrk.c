#include "main.h"

/**
 * _strpbrk - searches / locates the first occurrence of a string.
 * @s: The string array of characters to be compared.
 * @accept: one with wic a match is related to.
 * Return: returns the remaining characters after the match characters
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		int index;

		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return (NULL);
}
