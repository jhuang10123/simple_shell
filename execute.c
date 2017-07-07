#include "shell.h"
/**
 * _execute - executes command
 * @filename: name of file
 * @argv: arguments
 */
void _execute(char *filename, char *argv[])
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == -1)
		perror("Fork error");

	else if (pid == 0)
	{
		execve(filename, argv, NULL);
		perror("Execute Error");
	}
	else
		wait(&status);
}
