#include "shell.h"
/**
 * _execute - executes the command
 * @filename: name of file
 * @argv: arguments
 * @envp: finding the environment
 */
void _execute(char *filename, char *argv[], char *envp[])
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == -1)
		perror("Fork error");

	if (pid == 0)
	{
		if (execve(filename, argv, envp) == -1)
			cmd_error(filename);
	}
	else
		wait(&status);
}
