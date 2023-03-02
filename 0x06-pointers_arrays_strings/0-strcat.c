#include "main.h"
#include <string.h>

/**
 * _strcat - Joins two words or sentences together.
 * @dest: Vairable input to which a word or sentence is joined to.
 * @src: Variable input to our function to be joined to another.
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	_putchar('\n');
	return (0);
}
