#include "shell.h"

/**
 * split_on_delim - iterates through the string to find delimeter characters
 * @info: structure containing potential arguements used to maintain
 *  constant function prototype
 *  Return: always 0
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

	return 0;
}
