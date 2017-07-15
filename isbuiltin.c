#include "shell.h"
/**
 * isbuiltin - searches for builtin and finds it's corresponding handling fcn
 * @token: tokenized string
<<<<<<< HEAD
 * @envp: enviornment
=======
 * @envp : enviornment
>>>>>>> e2fb8c5c9c982d8c3dbd41c5ab905c73079779c3
 * Return: 0 if command found, else 1.
 */
int isbuiltin(char *token, char *envp[])
{
	int i;

	builtin_t list[] = {
		{"env", env_var},
		{"exit", exit_fcn},
		{NULL, NULL}
	};

	for (i = 0; list[i].command != NULL; i++)
	{
		if (_strcmp(token, list[i].command) == 0)
		{
			list[i].f(envp);
			return (0);
		}
	}
	return (1);

}

/**
 * env_var - prints environment variable
 * @envp: enviornment
 */
void env_var(char *envp[])
{
	int i;

	i = 0;
	while (envp[i] != NULL)
	{
		_putstring(envp[i]);
		_putchar('\n');
		i++;
	}
}

/**
 * exit_fcn - exits function
<<<<<<< HEAD
 * @envp: environment
=======
 * @envp: parameter
>>>>>>> e2fb8c5c9c982d8c3dbd41c5ab905c73079779c3
 */
void exit_fcn(char *envp[])
{
	(void)envp;
	exit(0);
}
