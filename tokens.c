#include "shell.h"
/**
 *
 */
char **tokenize(char *str)
{
	char **array;
	char *token;
	int i;

	array = malloc(sizeof(char *) * 1024);
	if (array == NULL)
	{
		perror("Malloc Error");
		return (NULL);
	}
	token = strtok(str, DELIM);

	for (i = 0; token != NULL; i++)
	{
		array[i] = token;
		token = strtok(NULL, DELIM);
	}

	array[i] = NULL;
	return (array);
}
