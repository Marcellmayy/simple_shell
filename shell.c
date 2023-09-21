#include "shell.h"
/**
 *main - entry point
 * 
 */
int main(void)
{
	char formt[128];

	while (1)
	{
		visualize_prompt();
		read_command_input(sizeof(formt));
		initialize_command(formt);
	}

	return (0);
}
