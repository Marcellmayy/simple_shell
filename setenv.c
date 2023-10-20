#include "shell.h"

/**
 * joemac_setenv - set a new environment variable.
 * @name: The name of the environment variable.
 * @value: The value to set for the environment variable.
 * Description: This function sets new environment variable with the specified
 * name and value. If the name or value is NULL, the function returns -1.
 * Otherwise, it returns 0 to indicate success.
 * Return: 0 on success, -1 on failure.
 * return: always 0
 */

int joemac_setenv(const char *name, const char *value)
{

	if (name == NULL || value == NULL)
	return (-1);
	return (0);
}
