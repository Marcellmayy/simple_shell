#include "shell.h"

/**
 * split_on_delim - iterates through the string to find delimeter characters
 * @info: structure containing potential arguements used to maintain
 *  constant function prototype
 *  Return: always 0
 */


char joemac_command_split(char *str, const char *delim)
{
	char *part = str;

	while (part != NULL && *part != '\0')
	{
	if (strchr(part, *delim) != NULL)
	{
	*part = '\0';
	part++;
	return (*str);
	}
	part++;
	}
	return '\0';
}
