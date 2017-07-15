#include "shell.h"
/**
 * main - takes user input and executes command if exist
 * @argc: argument count
 * @argv: agrument vector
 * @envp: environment
 * Return: 0
 */
int main(int argc, char *argv[], char *envp[])
{
	int built_retval;
	char *buffer;
	char **tokens;
	size_t n;
	list_t *path;
	int pipe = 0;
	struct stat sb;

	(void)argc; (void)argv;

	buffer = NULL; path = NULL; tokens = NULL;

	if (fstat(STDIN_FILENO, &sb) == -1)
		exit(EXIT_FAILURE);
	if ((sb.st_mode & S_IFMT) == S_IFIFO)
		pipe = 1;
	if (pipe == 0)
		run_prompt();

	path = get_path();

	while (getline(&buffer, &n, stdin) != -1)
	{
		tokens = tokenize(buffer);
		if (tokens == NULL || _strcmp(tokens[0], "\n") == 0)
		{
			run_prompt();
			continue;
		}
		if (tokens[0][0] != '/')
		{
			built_retval = isbuiltin(tokens[0], envp);
			if (built_retval == 1)
				run_path(path, tokens, envp);
		}
		else
			_execute(tokens[0], tokens, envp);
		free(tokens); run_prompt();
	}
	free_linked(path, buffer); return (0);
}
