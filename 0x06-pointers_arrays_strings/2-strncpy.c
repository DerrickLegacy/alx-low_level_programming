#include "main.h"

/**
 * _strncpy - Joins two words or sentences together.
 * @dest: Vairable input to which a word or sentence is joined to.
 * @n:  Maximum number of character to stop at of the @src.
 * @src: Variable input to our function to be joined to another.
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_length = 0;

	while (src[index++] != '\0')
	{
		src_length++;
	}
	for (index = 0; src[index] ; index++)
	{
		if (index < n)
		{
			dest[index] = src[index];
		}
	}
	for (index = src_length ; index < n ; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
