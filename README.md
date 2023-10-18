Project by: Joseph Anateyi and Marcel Okoubi
Project: simple_shell
Course: ALX SOFTWARE ENGINEERING

tokenization.c
The joemac_command_split() function splits the input command line string into tokens using a delimiter.

It initializes 'str' and 'delim' pointers to start parsing the line
Declares a tokens array to store split tokens
Uses a loop and strchr() to find delimiter occurrences
Sets delimiter to null byte to split the string
Increments pointer to next token
This allows the input line to be parsed into an array of command tokens for further processing.

read_input.c
The read_command_input() function reads user input from stdin.

It reads stdin into a fixed size buffer
Checks for read errors
Appends null byte after read bytes to terminate string
This allows the shell to read a line of user input in an efficient manner using buffers.

shell.c
The main() function implements the shell's top level logic.

It prints the prompt
Calls input and parsing functions
Checks if commands entered
Calls command execution
Frees memory
Loops for next input
This provides the overall flow - prompt, read, parse, execute, loop. The bulk of logic is handled by helper functions.

initialize.c
The initialize_command() function forks and executes commands.

It forks a child process
Child calls execve() to run command
Parent waits for child to finish
Returns exit status
This shows how the built-in execve() call overlays a process to run a new program.

display.c
visualize_prompt() prints the shell prompt by calling the print function.

ss_builtins.c
Implements the cd builtin to change directories.

Checks argument cases
Changes directory using chdir()
Updates PWD environment
Returns error if chdir fails
This provides the builtin cd command functionality.

The other files show implementations of builtins like setenv, unsetenv, custom print function, and environment handling.

Overall, the code demonstrates core concepts like input/output, parsing, processes, builtins, and flow control to build a functioning Unix shell.
