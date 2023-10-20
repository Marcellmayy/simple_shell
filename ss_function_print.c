#include "shell.h"

/**
* joemac_print - Print a formatted string to the specified output descriptor.
* @string: The string to print.
* @descriptor: The output (file descriptor) where the string is printed.
* This function takes string and output descriptor as parameters and prints
* the formatted string to the specified output. It is similar to the standard
* 'printf' function but allows you to specify the output descriptor.
* joemac_print - print function
* return: 0
*/
void joemac_print(char *string, int descriptor)
{

	write(descriptor, string, strlen(string));
}
