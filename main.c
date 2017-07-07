#include "shell.h"
/**
 * test files
 */
int main(void)
{
	char *input = NULL;
        char *filename = "/bin/ls";
	size_t size = NULL;

	run_prompt();

	if (getline(&input, &size, stdin) == -1)
		return (1);

	_execute(filename, args);
	run_prompt();

	free(input);
	return (0);
}
