#include <stddef.h>

/**
 * _strstr - Find a substring in a string.
 * @haystack: A string to search for the substring.
 * @needle: The substring to find.
 *
 * Return: A pointer to the first occurrence of the substring
 *           in the haystack, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2 = needle;

	for (p1 = haystack; *p1; p1++)
	{
		char *pp1 = p1;

		while (*pp1 == *p2 && *p2)
		{
			pp1++;
			p2++;
		}
		if (!*p2)
			return (p1);

		 p2 = needle;
	}
	return (NULL);
}
