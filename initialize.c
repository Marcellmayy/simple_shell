#include "shell.h"

/**
 * initialize_command - executes a command using execve 
 * @info: The info_t structure
 * Return: Status code of the executed command
*/

int initialize_command(info_t *info)
{
	pid_t child_pid;
	int status;
	
	if (access(info->full_path, X_OK) == -1)
	{
	perror("Error accessing command path");
	return -1;
	}

	child_pid = fork();
	if (child_pid == -1)
	{
	perror("fork");
	return (-1);
	}

	if (child_pid == 0)
	{
		
	if (execve(info->argv[0], info->argv, NULL)== -1)
	{
	perror("execve");
	exit(EXIT_FAILURE);
	}
	}
	else
	{
	wait(&status);
	}
  
	return (status);
}
