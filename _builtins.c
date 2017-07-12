#include "shell.h"
/**
 * _builtin - searches for builtin and finds it's corresponding handling fcn
 * @command - command to search
 * Return: 0 if command found, else 1.
 */
int _builtin(char* command)
{
	int i;

	builtin list[] = {
		{"env", env_var},
		{"exit", exit_fcn},
		{NULL, NULL}
	};

	for (i = 0; list[i].command != NULL; i++)
	{
		if (_strcmp(command, list[i].command) == 0)
		{
			list[i].f();
			printf("built in loop for %s\n", list[i].command);
			return (0);
		}
	}
	return (1);

}

/**
 * env_var - prints environment variable
 */
void env_var(void)
{
	int i;

	i = 0;
	while (environ[i] != NULL)
	{
		putstring(environ[i]);
		_putchar('\n');
	}
}

/**
 * exit_fcn - exits function
 */
void exit_fcn(void)
{
	exit(0);
}
