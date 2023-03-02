#include "main.h"

/**
 * _strncat - Joins two words or sentences together.
 * @dest: Vairable input to which a word or sentence is joined to.
 * @n:  Maximum number of character to stop at of the @src.
 * @src: Variable input to our function to be joined to another.
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_length = 0;

	while (dest[index++] != '\0')
		dest_length++;
	for (index = 0; src[index] != '\0'; index++)
		if (index < n)
			dest[dest_length++] = src[index];
		else
			break;
	return (dest);
}
