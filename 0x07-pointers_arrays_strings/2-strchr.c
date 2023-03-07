#include "main.h"

/**
 * _strchr - returns all strings after a matched character matched.
 * @s: the source array from which to make a search.
 * @c: the character to match.
 * Return: returns the array containing thne matched character.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
