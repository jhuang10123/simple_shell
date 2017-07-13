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

	pipe = 0;
	buffer = NULL;
	filename = NULL;
	path = NULL;
	tokens = NULL;


	if (fstat(STDIN_FILENO, &sb) == -1)
	{
		exit(EXIT_FAILURE);
	}

	if ((sb.st_mode & S_IFMT) == S_IFIFO)
		pipe = 1;

	if (pipe == 0)
		run_prompt();

	while (getline(&buffer, &n, stdin)!= -1)
	{
		tokens = tokenize(buffer);

		/* free(buffer); */
		/* free(tokens); */
		/* exit(0); */

/* run fcn & return 0 if builtin, else return 1 */
		built_retval = isbuiltin(tokens[0], envp);
		if (built_retval == 1)
		{
			path = get_path();

			filename = check_path(path, tokens[0]);
/* edit code below */
			if (file_stat(filename) == 0)
				_execute(filename, tokens, envp);

			run_prompt();
		}
		if (getline(&buffer, &n, stdin)!= -1)
		{
			free(buffer);
			return (1);
		}
	}
	free(buffer);
	return (0);
}
