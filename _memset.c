#include "shell.h"

/**
 * _memset - function fills the first n bytes of the memory area
 *	with a character
 *@s: a charcter pointer
 *@b: a character
 *@n: an integer
 *
 * Return: a charcter pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*str = b;
		str++;
	}

	return (s);
}
