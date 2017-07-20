#include "shell.h"
/**
 * tokenize - tokenizes a character string
 * @str: string to tokenixe
 * Return: 2d array of tokenized string
 */
char **tokenize(char *str)
{
	char **array;
	int i;

	array = malloc(sizeof(char *) * 100);
	if (array == NULL)
	{
		perror("Malloc Error");
		return (NULL);
	}
	array[0] = strtok(str, DELIM);

	for (i = 1; array[i]; i++)
	{
		array[i] = strtok(NULL, DELIM);
	}
	return (array);
}
