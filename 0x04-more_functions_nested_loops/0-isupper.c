#include "main.h"

/**
 * _isupper - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
