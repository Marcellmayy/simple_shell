#include "shell.h"

/**
 * read_input - reads input
 * @format: string input
 * @size: size of string
 * return: 0
 */
char *read_command_input(void)
{
	ssize_t read_command;
	char message[BUFSIZE];
	char *line = NULL;
	if (size > BUFSIZE) 
	{
	fprintf(stderr, "Input size exceeds buffer size\n");
	exit(EXIT_FAILURE);
	}
	read_command = read(STDIN_FILENO, message, size);
	if (read_command == -1)
	{
	perror("read");
	exit(EXIT_FAILURE);
	}
	message[read_command - 1] = '\0';
	return (line);
}
