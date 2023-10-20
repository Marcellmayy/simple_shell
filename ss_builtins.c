#include "shell.h"

/**
 * cd - Change the current working directory.
 * jm_builtins_env - Check if a built-in command is "env".
 * @name: The name of the built-in command.
 *
 * This function checks if a given command name is "env," which is a built-in
 * command to display the current environment.
 *
 * Return: 1 if the command is "env,"0 otherwise.
 */

char *jm_builtins_env(const char *name);

int cd(char **args)
{

	if (args[1] == NULL)
	{
	chdir(getenv("HOME"));
	}
	else if (strcmp(args[1], "-") == 0)
	{
	chdir(getenv("OLDPWD"));
	}
	else
	{
	if (chdir(args[1]) != 0)
	{
	perror("chdir");
	return (1);
	}
	}

	joemac_setenv("PWD", getcwd(NULL, 0));

	return (0);
}
