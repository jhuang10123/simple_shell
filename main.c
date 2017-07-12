#include "shell.h"
/**
 * main - 
 */
int main(void)
{
	struct stat sb;
	int noninteract;
	char *buffer, *filename;
	char **tokens;
	size_t n;
	list_t *path;

	if ((sb.st_mode & S_IFMT) == S_IFIFO)
		noninteract = 1;

	if (noninteract == 0)
		run_prompt();
	while (getline(&buffer, &n, stdin)!= -1)
	{
		printf("buffer after getline: %s/n", buffer);
		tokens = tokenize(buffer);
		printf("tokenized/n");

		if (_builtin(tokens[0]) == 1)
		{
			printf("inside builtin check loop/n");
			path = get_path();

			filename = check_path(path, tokens[0]);
			if (file_stat(filename) == 0)
			{
				printf("file stat loop /n");
				_execute(filename, tokens);
/* perror */
			}
			if (noninteract == 0)
				run_prompt();
/*			else
			error; */
		}
/*
  if (noninteract == 0)
  {
  printf("noninteract = 0 /n");
  run_prompt();
  }
*/
		if (getline(&buffer, &n, stdin)!= -1)
			return (1);
	}
	return (0);
}
