#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	l = len1 + len2;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);
	len2 = 0;

	while (k < l)
	{
		if (k <= len1)
			s[k] = s1[k];

		if (k >= len1)
			s[k] = s2[len2];
			len2++;
		}

		k++;
	}

	s[k] = '\0';
	return (s);
}
