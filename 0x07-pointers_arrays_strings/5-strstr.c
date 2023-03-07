#include  "main.h"

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: pointer whose strings are to be compared with @needle
 * @needle: The other point whose strings are to be compared for a match.
 * Return: returns the identified string plus the other parts.
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			for (j = 0 ; needle[j] != '\0' ; j++)
			{
				if (*(haystack + j) != needle[j])
				{
					break;
				}
			}
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
