#include "shell.h"

/**
 * joemac_unsetenv - Remove an environment variable.
 * @name: The name of the environment variable to be removed.
 *
 * This function removes specified environment variable with the given name.
 *
 * Return: 0 on success, -1 on failure.
 */
int joemac_unsetenv(const char *name)
{
	if (name == NULL)
	return (-1);

	if (unsetenv(name) == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
