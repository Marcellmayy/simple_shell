#include "shell.h"

/**
 * joemac_command_split - Splits a string into command parts using a delimiter.
 * @line: The input string to split.
 *
 * This function splits the input string into multiple command parts using the
 * specified delimiter character (';'). Parts are separated by the delimiter,
 * and the resulting parts are stored in an array of strings.
 *
 * Return: An array of strings containing command parts, or NULL on failure.
 */
char **joemac_command_split(char *line)
{
	char *part = line;
	char *delim = ";";

	while (part != NULL)
	{
		if (strchr(part, *delim) != NULL)
	{
		*part = '\0';
		part++;
	}
		part++;

	}
		return (0);
}
