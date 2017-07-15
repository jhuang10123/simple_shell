#include "shell.h"
/**
 *
 */
void run_path(list_t *path, char**tokens, char *envp[])
{
	char *filename;

	filename = check_path(path, tokens[0]);
	if (file_stat(filename) == 0)
		_execute(filename, tokens, envp);
}
