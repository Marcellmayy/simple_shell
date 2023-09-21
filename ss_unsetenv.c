#include "shell.h"

/**
 *unsetenv - remove an environment variable
 *@format: string input
 *return: always 0
 */

int joemac_unsetenv(const char *name)
{
  if (name == NULL) return -1;

  return unsetenv(name);
}
