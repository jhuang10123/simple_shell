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

/* 100 bytes in 1 blocks are definitely lost */

/* 800 bytes in 1 blocks are definitely lost */

		/* free(buffer); */
		/* free(tokens); */
		/* exit(0); */

/* 1 error from tokens, lost 100 bytes in 1 block */

/* run fcn & return 0 if builtin, else return 1 */
		built_retval = isbuiltin(tokens[0], envp);
		if (built_retval == 1)
		{
			path = get_path();

			/* 128 (16 direct, 112 indirect) bytes in 1 blocks */
			/* by 0x400936: add_node_end (add_node_end.c:12 */
			/* by 0x400B80: get_path (get_path.c:26) */

/*
			free_linked(path);
			exit(0);
*/
			filename = check_path(path, tokens[0]);

			free_linked(path);
			free(filename);
			/* 8,192 bytes in 1 blocks are definitely lost */
			/* 	3 errors from 3 contexts */
			/* free(buffer); */
			/* free(tokens); */
			/* free_linked(path); */
			/* exit(0); */

/* edit code below */
			if (file_stat(filename) == 0)
				_execute(filename, tokens, envp);

			free(tokens);
			run_prompt();
		}
		if (getline(&buffer, &n, stdin)!= -1)
		{
			free(buffer);
			return (1);
		}
	}


	/* definitely lost: 9,108 bytes in 4 blocks */
	/* 	indirectly lost: 112 bytes in 7 blocks */

	/* free(buffer); */
	/* free(tokens); */
	/* free_linked(path); */
	/* exit(0); */
	return (0);
}
