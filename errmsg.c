#include "shell.h"

/**
 * errmsg - This function is responsible for displaying an error
 *         command is not found
 * @argv: An array of character pointers that represents
 *          the original command line arguments.
 * @new_argv: An array of character pointers that
 *          represents the tokenized command.
 *
 * Return: void(nothing)
 */

void errmsg(char **argv, char **new_argv)
{
	char *msg[7];
	int i;

	msg[0] = argv[0];
	msg[1] = ": ";
	msg[2] = "1: ";
	msg[3] = new_argv[0];
	msg[4] = ": ";
	msg[5] = "not found";
	msg[6] = "\0";

	for (i = 0; i < 7; i++)
	{
		write(STDERR_FILENO, msg[i], _strlen(msg[i]));
	}


	write(STDERR_FILENO, "\n", 1);
}

/**
 * errmsg2 - responsible for displaying an error message
 * @argv: Array of character pointers representing
 *          the command line arguments.
 * @new_argv: Array of character pointers representing
 *         the tokenized command.
 *
 * Returns: Void.
 */

void errmsg2(char **argv, char **new_argv)
{
	int i;
	char *msg[8];

	msg[0] = argv[0];
	msg[1] = ": ";
	msg[2] = "1: ";
	msg[3] = new_argv[0];
	msg[4] = ": ";
	msg[5] = "Illegal number: ";
	msg[6] = new_argv[1];
	msg[7] = "\0";

	for (i = 0; i < 8; i++)
	{
		write(STDERR_FILENO, msg[i], _strlen(msg[i]));
	}

	write(STDERR_FILENO, "\n", 1);
}
