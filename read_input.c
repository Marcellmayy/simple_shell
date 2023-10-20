#include "shell.h"

/**
 * read_command_input - reads input from standard input.
 * @void: No parameters.
 * This function reads a line of input from the standard input (stdin) and
 * returns it as a string.
 *
 * Return: A dynamically allocated string containing the user's input, or NULL
 * if an error occurs.
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
