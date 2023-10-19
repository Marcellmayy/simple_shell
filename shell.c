#include "shell.h"
/**
 *main - entry point
 *
 */
int main(void)
{

	char *line;
	char **tokens;

	while (1)
	{
		visualize_prompt();
		line = read_command_input();
		tokens = joemac_command_split(line);
	if (tokens[0] != NULL)
	{
		initialize_command();

	}
		free(tokens);
		free(line);

	}
		return (0);
	}
