#include "shell.h"
/**
 *main - entry point
 * 
 */
int main(void)
{
	size_t size = 128;
	char *command;

	while (1)
	{
	visualize_prompt();

	read_command_input(size, &command);
	
	initialize_command(command); 
	}
  
	return 0;
}
