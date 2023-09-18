#include "shell.h"


/**
 * _strcat - a function to concatenates two string
 *@dest: the string concatenated to be return
 *@src: the source string to be appended to the end of dest
 *
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	int i, len_dest = _strlen(dest);

	i = len_dest;
	for (; *src != '\0'; src++)
	{
		dest[i] = *src;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
