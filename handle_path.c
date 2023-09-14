#include "shell.h"

int is_valid_path(char *command, struct stat st);
int is_path(char *command);

/**
 * is_path - checks if a given command is  a path
 * @command: the command to check
 *
 * Return: 1 if the command contains a path, 0 otherwise
 */

int is_path(char *command)
{
	int i, path = 0;

	i = 0;
	while (command[i])
	{
		if (command[i] == '/')
		{
			path = 1;
			break;
		}
		i++;
	}
	/*printf("is_path = %d\n", path);*/
	return (path);

}

/**
 * _getenv - Finds the value of an environment variable.
 * @str1: The name of the environment variable to looked up.
 *
 * Return:  A pointer to the value of the environment variable, or NULL if
 *           the variable is not found or if the input is invalid.
 *
 */

char *_getenv(char *str1)
{
	char *env = str1;
	char *curr_env;
	int index1, index2, flag = 0;

	if (env == NULL || (_strlen(env) == 0))
		return (NULL);

	index1 = 0;
	while (environ[index1])
	{
		index2 = 0;
		flag = 0;
		curr_env = environ[index1];

		while (env[index2] && (curr_env[index2] != '='))
		{
			if (env[index2] != curr_env[index2])
			{
				flag = 1;
				break;
			}
			index2++;
		}
		if (!flag)
		{

			return (curr_env + index2 + index1);
		}
		index1++;
	}

	return (NULL);
}

/**
 * is_valid_path - checks if a given command is a valid path
 * @command: the command to check
 * @st: a stat structure to store information about the file
 *
 * Return: 0 if the command is a valid path, -1 otherwise
 */

int is_valid_path(char *command, struct stat st)
{
	int valid;

	valid = stat(command, &st);

	return (valid);
}

/**
 * handle_path - Finds the full path of command
 * @command: the command to search for.
 * @find: Store the full path of the command
 *             in a buffer and create a pointer to it.
 *
 * Return: a pointer to the complete command path if found,
 *         or NULL if the command is not located.
 */

char *handle_path(char *command, char **find)
{
	char *PATH = _getenv("PATH");
	char *ptr = PATH;
	int index1, index2;
	struct stat st;
	int found = 0;

	if (is_path(command))
	{
		if (!is_valid_path(command, st))
		{
			*find = strcpy(*find, command);
			return (*find);
		}
		else
		{
			*find = NULL;
			return (*find);
		}
	}

	if (ptr == NULL)
	{
		*find = NULL;
		return (*find);
	}

	index1 = 0;
	while (ptr[index1])
	{
		_memset(*find, '\0', 1024);
		index2 = 0;

		while (ptr[index1] != ':' && ptr[index1] != '\0')
		{
			(*find)[index2] = ptr[index1];
			index1++;
			index2++;
		}

		if ((*find)[index2 - 1] != '/')
		{
			(*find)[index2] = '/';
		}

		_strcat(*find, command);
		found = stat(*find, &st);
		if (!found)
		{
			return (*find);
		}

		if (ptr[index1] == ':')
		{
			index1++;
		}
		else
		{
			break;
		}
	}

	*find = NULL;
	return (*find);
}
