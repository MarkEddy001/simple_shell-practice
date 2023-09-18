#include "shell.h"

/**
 * _strlen - a function that calculates the length of a string.
 * @s: pointer to the string.
 *
 * Return: void
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
