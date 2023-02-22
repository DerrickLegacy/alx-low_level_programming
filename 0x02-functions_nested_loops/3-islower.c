#include "main.h"

/**
 * _islowe - checks for lowercase of a character
 * Return: 1 for true then 0, otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
