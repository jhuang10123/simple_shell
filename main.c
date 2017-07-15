#include "shell.h"
/**
 * main - 
 */
int main(int argc, char *argv[], char *envp[])
{
	int built_retval;
	char *buffer, *filename;
	char **tokens;
	size_t n;
	list_t *path;
	int pipe;
	struct stat sb;

	(void)argc;
	(void)argv;

	buffer = NULL;
	pipe = 0;
	filename = NULL;
	path = NULL;
	tokens = NULL;

	if (fstat(STDIN_FILENO, &sb) == -1)
		exit(EXIT_FAILURE);

	if ((sb.st_mode & S_IFMT) == S_IFIFO)
		pipe = 1;

	if (pipe == 0)
		run_prompt();

	path = get_path();

	while (getline(&buffer, &n, stdin)!= -1)
	{
		tokens = tokenize(buffer);

		if (_strcmp(tokens[0], "\n") == 0 || tokens == NULL)
		{
		    run_prompt();
		    continue;
		}

		if (tokens[0][0] != '/')
		{
			built_retval = isbuiltin(tokens[0], envp);
			if (built_retval == 1)
			{

				/* if (path == NULL) */
				/* 	path = get_path(); */
				filename = check_path(path, tokens[0]);

				if (file_stat(filename) == 0)
				{
					_execute(filename, tokens, envp);

				}
			}
			/* free_linked(path); */
			free(filename);
		}
		else
			_execute(tokens[0], tokens, envp);
		free(tokens);
		run_prompt();
	}
	free(buffer);
	free_linked(path);
	return (0);
}
