	#include "shell.h"
	/*
	* handle aargument and path argument cases
	* cd: change to previous directory
	* chdir: change working directory
	* pwd: print working directory
	* Return: error if chdir fails
	*
	*/

	char *jm_env(const char *name);

	int cd(char **args)
	{
	if (args[1] == NULL)
	{
	/* No argument - change to home */
	chdir(jm_env("HOME"));
	}
	else if (strcmp(args[1], "-") == 0)
	{
	/* cd - change to previous directory */
	chdir(jm_env("OLDPWD"));
	}
	else
	{
	/* Change directory */
	if (chdir(args[1]) != 0)
	{
	perror("chdir");
	return (1);
	}
	}

	/* Update PWD environment variable */
	joemac_setenv("PWD", getcwd(NULL, 0), 1);

	return (0);
	}
