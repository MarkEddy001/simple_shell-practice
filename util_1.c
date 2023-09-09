#include "shell.h"

/**
 * check_usage - Checks if the provided number of command line
 *           is valid for launching the shell program.
 *
 * @argc: The count of command line arguments
 *
 * Return: void
 */

void check_usage(int argc)
{
	if (argc > 1)
	{
		write(STDERR_FILENO, "Usage: simple_shell\n", 21);
		exit(2);
	}
}

/**
 * cmd_not_found - handles situations when a command cannot be executed
 *
 * @argv: An array of character pointers containing the
 *              command line arguments.
 * @new_argv: An array of character pointers
 *                  containing the tokenized command.
 * @exit_status: A pointer to an integer that stores the exit status.
 *
 * Return: void
 */

void cmd_not_found(char **argv, char **new_argv, int *exit_status)
{
	errmsg(argv, new_argv);
	*exit_status = 127;
	_free(new_argv);
}

/**
 * _free -  Deallocates a dynamically allocated array of character pointers.
 * @new_argv: The array to be deallocated.
 *
 * Return: void
 */

void _free(char **new_argv)
{
	free(new_argv);
	new_argv = NULL;
}

/**
 * _prompt - Displays a prompt on the standard output.
 * @prompt: The prompt message to be printed.
 *
 * Return: void
 */

void _prompt(char *prompt)
{
	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, prompt, 2);
}

/**
 * _prompt2 - This function adds a newline character to the standard output
 *             when the input is coming from a terminal before the shell exits.
 *
 * Return: void
 */

void _prompt2(void)
{
	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, "\n", 1);
}
