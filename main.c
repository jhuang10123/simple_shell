#include "shell.h"
/**
<<<<<<< HEAD
 * main - takes user input and executes command if exist
 * @argc: argument count
 * @argv: agrument vector
 * @envp: environment
=======
 * main - main library
 * @argc: argument
 * @argv: argument
 * @envp: enviornment paramenter
>>>>>>> e2fb8c5c9c982d8c3dbd41c5ab905c73079779c3
 * Return: 0
 */
int main(int argc, char *argv[], char *envp[])
{
<<<<<<< HEAD
	int built_retval;
	char *buffer;
	char **tokens;
	size_t n;
	list_t *path;
	int pipe = 0;

	(void)argc; (void)argv;

	buffer = NULL; path = NULL; tokens = NULL;

	signal(SIGINT, signal_handle);
	if (isatty(STDIN_FILENO) == 0)
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
=======
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

			free_linked(path), free(filename), free(tokens);
			run_prompt();
		}
>>>>>>> e2fb8c5c9c982d8c3dbd41c5ab905c73079779c3
	}

	free_linked(path, buffer); return (0);
}
