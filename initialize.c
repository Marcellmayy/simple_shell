#include "shell.h"

/**
 * initialize_command - executes a command using execve
 * Return: Status code of the executed command
 */
int initialize_command(void)

{
	pid_t child_pid;
	int status;
	char *argv[] = {"/bin/ls", "-l", NULL};
	{
	perror("Error accessing command path");
	return (-1);
	}
	child_pid = fork();
	if (child_pid == -1)
	{
	perror("fork");
	return (-1);
	}
	if (child_pid == 0)
	{
	if (execve(argv[0], argv, NULL) == -1)
	{
	perror("execve");
	exit(EXIT_FAILURE);
	}
	}
	else
	{
	wait(&status);
	}
	return (0);
}
