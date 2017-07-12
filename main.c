#include "shell.h"
/**
 * main - 
 */
int main(void)
{
	int i, built_retval;
	char *buffer, *filename;
	char **tokens;
	size_t n;
	list_t *path;
	int pipe = 0;
	struct stat sb;

	buffer = NULL;
	filename = NULL;

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
		printf("buffer after getline: %s\n", buffer);
		tokens = tokenize(buffer);

/* test check tokenize */
		for (i = 0; tokens[i] != NULL; i++)
		{
			printf("tokenized buffer = %s\n", tokens[i]);
		}


/* run fcn & return 0 if builtin, else return 1 */
		built_retval = _builtin(tokens[0]);
		if (built_retval == 1)
		{
			printf("inside builtin check loop\n");
			path = get_path();

			filename = check_path(path, tokens[0]);
/* edit code below */
			if (file_stat(filename) == 0)
			{
				printf("file stat loop\n prepare for execution\n");

				_execute(filename, tokens);

				printf("completed execution\n");
				/* perror */
			}
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
