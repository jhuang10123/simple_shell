#include "shell.h"
/**
 * tokenize - tokenizes a character string
 * @str: string to tokenixe
 * Return: 2d array of tokenized string
 */
char **tokenize(char *str)
{
	char **array;
	int i = 0;

	array = malloc(sizeof(char *) * 1024);
	if (array == NULL)
	{
		perror("Malloc Error");
		return (NULL);
	}
	array[0] = strtok(str, DELIM);
	if ( array[0] == NULL)
		return (NULL);

	for (i = 1; array[i]; i++)
	{
		array[i] = strtok(NULL, DELIM);
	}


	return (array);
}
