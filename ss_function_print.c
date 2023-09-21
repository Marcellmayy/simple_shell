	#include "shell.h"

	/**
	* joemac_print - print function
	* @format: string input
	* return: 0
	*/
	void joemac_print(char *string int descriptor)
	{
	write(descriptor, string, strlen(string));
	}

