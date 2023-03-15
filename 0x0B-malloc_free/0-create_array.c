#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: The size of the array
  * @c: The char to fill in the array
  *
  * Return: The array filled
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;

	if (size == 0)
		return (NULL);

	m = malloc(size * sizeof(char));

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		m[i] = c;
	}

	return (m);
}
