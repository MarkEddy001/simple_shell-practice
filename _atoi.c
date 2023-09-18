#include "shell.h"

/**
 * _atoi - Convert a string to an integer
 * @s: string pointer input
 *
 * Return: int
 */

int _atoi(char *s)
{
	unsigned int num, result = 0;
	int sign = 1;
	char *ptr = s;

	while (*ptr != '\0' && (*ptr < '0' || *ptr > '9'))
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}

	ptr = s;
	while (*ptr != '\0' && (*ptr >= '0' && *ptr <= '9'))
	{
		num = *ptr  - '0';
		result = result * 10 + num;
		ptr++;
	}

	if (*ptr != '\0')
		return (-1);
	return (sign * result);

}
