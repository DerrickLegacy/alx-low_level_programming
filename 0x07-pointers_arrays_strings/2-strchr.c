#include "main.h"

/**
 * _strchr - returns all strings after a matched character matched.
 * @s: the source array from which to make a search.
 * @c: the character to match.
 * Return: returns the array containing thne matched character.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
