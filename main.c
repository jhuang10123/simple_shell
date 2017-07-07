#include "shell.h"
/**
 * 
 */
int main(int argc, char *argv[])
{

/* need to check if interactive
 * if interactive:
 */
	write(STDOUT_FILENO, "$ ", 2);

	while ((getline(&buffer, &buflen, stdin) -1)
		{
/* loop while getline != -1. if hit enter, should print prompt
 * tokenize, execute, free, print prompt again when done. exit loop
 * check if need to free anything else. return (0) */

		}
}
