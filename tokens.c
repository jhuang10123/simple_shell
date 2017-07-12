#include "shell.h"
/**
 * tokenize - tokenizes a character string
 * @str: string to tokenixe
 * @Return: 2d array of tokenized string
 */
char **tokenize(char *str)
{
	char **array;
	char *token;
	int i;

	array = malloc(sizeof(char *) * 100);
	if (array == NULL)
	{
		perror("Malloc Error");
		return (NULL);
	}

	token = malloc(sizeof(char ) * 100);

	token = strtok(str, DELIM);

	for (i = 0; token != NULL; i++)
	{
		array[i] = token;
		token = strtok(NULL, DELIM);
	}

	array[i] = NULL;
	return (array);
}
