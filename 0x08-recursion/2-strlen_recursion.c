#include "main.h"

/**
 * _strlen_recursion - finds the length of a string.
 * @s: String whose length is to be found.
 * Return: returns if @s == '\0' and  length if not == '\0'
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
