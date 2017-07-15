#include "shell.h"
/**
 * run_path - store PATH in linked list and check if usr command exist
 * @path: linked list containing PATH
 * @tokens: pointer to array of tokenized user input
 * @envp: environment
 */
void run_path(list_t *path, char **tokens, char *envp[])
{
	char *filename;

	filename = check_path(path, tokens[0]);
	if (file_stat(filename) == 0)
		_execute(filename, tokens, envp);
	else
		cmd_error(filename);
}
