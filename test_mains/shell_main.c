#include "shell.h"
/**
 * 
 */
int main(void)
{

	char *input, *bufsize;

	input = NULL;
	bufsize = NULL;

/* need to check if interactive
 * if interactive:
 */
	write(STDOUT_FILENO, "$ ", 2);

	while ((getline(&input, &bufsize, stdin) -1)
		{
/* loop while getline != -1. if hit enter, should print prompt
 * tokenize, execute, free, print prompt again when done. exit loop
 * check if need to free anything else. return (0) */
			_putstring("into while loop");

		}
		return (0);
}
