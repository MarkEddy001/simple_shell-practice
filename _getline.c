#include "shell.h"

#define BUF_SIZE 1024

/**
 * _getline - getline() reads an entire line from fd, storing the address
 *	of the buffer containing the text into *lineptr. The buf‐fer
 *	is null-terminated and includes the newline character
 *@lineptr: a double pointer to store the address of the line
 *@n: the size of the allocating for lineptr
 *@fd: file descriptor
 *
 * Return: the size of the line read from fd
 */

ssize_t _getline(char **lineptr, size_t *n, int fd)
{
	static char buf[BUF_SIZE];
	static size_t buf_index;
	static size_t num_read;
	ssize_t line_index = 0;

	if (*lineptr == NULL)
	{
		*n = BUF_SIZE;
		*lineptr = malloc((*n) * sizeof(char));
	}

	while (1)
	{
		if (buf_index >= num_read)
		{
			num_read = read(fd, buf, BUF_SIZE);
			buf_index = 0;

		}

		if (num_read <= 0)
			break;

		if ((unsigned int)*n - 1 <= line_index)
		{
			*n *= 2;
			*lineptr = _realloc(*lineptr, *n / 2, *n);
		}
		(*lineptr)[line_index] = buf[buf_index];
		line_index++;
		buf_index++;
		if ((*lineptr)[line_index - 1] == '\n')
			break;
	}
	if (num_read <= 0 && line_index == 0)
		return (-1);
	(*lineptr)[line_index] = '\0';
	return (line_index);

}
