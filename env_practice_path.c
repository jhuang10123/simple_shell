#include "shell.h"
/**
 *
 */
void find_path()
{
	env_list = strtok(environ);

}

/*
 * copy path
 * tokenize environ, strcat environ token w/ arg[0], if exist(stat = 0), execute
 * for i = 0; eoken[i] != '\0'; i++
 * command = strcat(tokan[i], av[0])
 *if stat(command, &st) == ))
 *execv
 */
