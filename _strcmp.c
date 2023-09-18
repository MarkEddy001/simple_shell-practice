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
	int diff = 0, index1;

	index1 = 0;
	while (s1[index1] != '\0' && s2[index1] != '\0')
	{
		diff = s1[index1] - s2[index1];

		if (diff == 0)
			index1++;
		else
			break;
	}

	return (diff);
}
