#include "shell.h"

/**
 * contains - checks if a given string contains a specified substring.
 * @str1: The string in which we want to search for a substring.
 * @str2: The substring that we are searching for within str1.
 *
 * Return: 1 if str2 is found within str1, 0 otherwise.
 */

int contains(char *str1, char *str2)
{
	char *ptr = _strstr(str1, str2);

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
