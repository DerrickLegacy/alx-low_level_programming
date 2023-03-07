#include  "main.h"

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: pointer whose strings are to be compared with @needle
 * @needle: The other point whose strings are to be compared for a match.
 * Return: returns the identified string plus the other parts.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
