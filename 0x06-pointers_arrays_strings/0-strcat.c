#include "main.h"

/**
 * _strcat - Joins two words or sentences together.
 * @dest: Vairable input to which a word or sentence is joined to.
 * @src: Variable input to our function to be joined to another.
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_length = 0;

	while (dest[index++] != '\0')
		dest_length++;

	for (index = 0; src[index] != '\0'; index++)
		dest[dest_length++] = src[index];

	return (dest);
}
