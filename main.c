#include "shell.h"
/**
 * main - main library
 * @argc: argument
 * @argv: argument
 * @envp: enviornment paramenter
 * Return: 0
 */
int main(int argc, char *argv[], char *envp[])
{
	int built_retval, pipe = 0;
	char *buffer = NULL, *filename = NULL, **tokens;
	size_t n;
	list_t *path;
	struct stat sb;

	(void)argc, (void)argv;
	path = NULL;
	tokens = NULL;
	if (fstat(STDIN_FILENO, &sb) == -1)
		exit(EXIT_FAILURE);
	if ((sb.st_mode & S_IFMT) == S_IFIFO)
		pipe = 1;
	if (pipe == 0)
		run_prompt();
	while (getline(&buffer, &n, stdin) != -1)
	{
		if (_strcmp(buffer, "\n") == 0)
			run_prompt();
		tokens = tokenize(buffer);
		built_retval = isbuiltin(tokens[0], envp);
		if (built_retval == 1)
		{
			path = get_path();
			filename = check_path(path, tokens[0]);
			if (file_stat(filename) == 0)
				_execute(filename, tokens, envp);
<<<<<<< HEAD
			/*else*/
			/*	cmd_error(filename);*/
			free_linked(path), free(filename), free(tokens);
			if (pipe == 0)
				run_prompt();
		}
=======

			free_linked(path);
			free(filename);
			free(tokens);

			run_prompt();
			}
>>>>>>> 02de4669d20c8f15122d2e02823c4c02ababe1c1
	}
	free(buffer);
	return (0);
}
