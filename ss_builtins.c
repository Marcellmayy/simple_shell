#include "shell.h"

/* Handle argument and path argument cases  
 * chdir: change working directory
 * pwd: print working directory
 * Return: error if chdir fails
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
	return 1;
	}
	}

	joemac_setenv("PWD", getcwd(NULL, 0));

	return 0;
}
