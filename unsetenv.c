#include "shell.h"

/**
 *unsetenv - remove an environment variable
 *@format: string input
 *return: always 0 if sucess, -1 on failure
 */

int joemac_unsetenv(const char *name)
{
	if (name == NULL) 
	return (-1);

	if (unsetenv(name)== 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
