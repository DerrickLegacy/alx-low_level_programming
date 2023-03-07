#include "main.h"

/**
 * _memcpy - copies the contents of one array into another
 * @dest: Destination array
 * @src: The source of our elements
 * @n: The size of bytes to be preserved
 * Return: Returns the dest array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	
	if (dest == NULL)
		return (NULL);
	for (i = 0 ; (unsigned int)i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
