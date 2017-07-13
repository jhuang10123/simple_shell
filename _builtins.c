#include "shell.h"
/**
 * _builtin - searches for builtin and finds it's corresponding handling fcn
 * @command - command to search
 * Return: 0 if command found, else 1.
 */
int _builtin(char* command, char *envp[])
{
	int i;

	builtin_t list[] = {
		{"env", env_var},
		{"exit", exit_fcn},
		{NULL, NULL}
	};

	for (i = 0; list[i].command != NULL; i++)
	{
		if (_strcmp(command, list[i].command) == 0)
		{
			list[i].f(envp);
			printf("built in loop for %s\n", list[i].command);
			return (0);
		}
	}
	return (1);

}

/**
 * env_var - prints environment variable
 */
void env_var(char *envp[])
{
	int i;

	i = 0;
	while (envp[i] != NULL)
	{
		putstring(envp[i]);
		_putchar('\n');
		i++;
	}
}

/**
 * exit_fcn - exits function
 */
void exit_fcn(char *envp[])
{
	(void)envp;
	exit(0);
}
