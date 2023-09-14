#include "shell.h"

/**
 *_strcmp - compare strings
 *@s1: first string
 *@s2: second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0, i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		diff = s1[i] - s2[i];

		if (diff == 0)
			i++;
		else
			break;
	}

	return (diff);
}
