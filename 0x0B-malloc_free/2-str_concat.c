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
	int len1 = 0, len2 = 0, k = 0, len_total = 0;
	char *s;
	
	/* Checking whether strings are not empty */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	/* Detriming length of each string then total length */
	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	len_total = len1 + len2;
	/* Reserving memory equivalent to the two strings */
	s = malloc((sizeof(char) * len_total) + 1);

	if (s == NULL)
		return (NULL);

	len2 = 0;

	while (k < len_total)
	{
		if (k <= len1)
			s[k] = s1[k];

		if (k >= len2)
		{
			s[k] = s2[len2];
			len2++;
		}

		k++;
	}

	s[k] = '\0';
	return (s);
}
