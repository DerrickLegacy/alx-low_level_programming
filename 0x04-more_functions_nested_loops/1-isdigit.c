#include "main.h"

/**
 * _isdigit - Checks for a digit value.
 * @c: The value to be checked for.
 *
 * Return: 1 for a digit, 0 for otherwise part
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
