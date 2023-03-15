#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: the array to be duplicated
 * Return: Null if unsuccessful,else an array pointer
 */
char *_strdup(char *str)
{
	int len = 1;
	int j;
	char *dup;

	if (str == NULL)
		return (NULL);
	/* Obtail length of the original string */
	while (str[len])
	{
		len++;
	}
	dup = malloc((sizeof(char) * len) + 1);
	/* validate malloc if NULL */
	if (dup == NULL)
		return (NULL);
	/* Copying from str too dup */
	for (j = 0 ; j < len ; j++)
	{
		dup[j] = str[j];
	}
	dup[len] = '\0';
	return (dup);
}
