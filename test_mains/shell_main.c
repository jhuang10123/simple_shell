#include "shell.h"
/**
 *
 */
int main(void)
{

	char *input, *bufsize;

	if ((sb.st_mode & S_IFIFO) == 0)
	{
		input = NULL;
		bufsize = NULL;

		while ((getline(&input, &bufsize, stdin) != -1)
			{
				run_prompt();
/* loop while getline != -1. if hit enter, should print prompt
 * tokenize, execute, free, print prompt again when done. exit loop
 * check if need to free anything else. return (0) */
				printf("into while loop");


			}
			}
		free(bufsize);
		return (0);

}
