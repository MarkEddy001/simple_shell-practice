#include "shell.h"

/**
 * _memset - function fills the first n bytes of the memory area
 *	with a character
 *@s: a charcter pointer
 *@b: a character to fill the memory block with.
 *@n: an integer
 *
 * Return: a character pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;
	unsigned int index1;

	for (index1 = 0; index1 < n; index1++)
	{
		*str = b;
		str++;
	}

	return (s);
}
