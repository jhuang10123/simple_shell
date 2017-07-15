#include "shell.h"
/**
 * check_path - concat user input to values of linked list
 * @list: linked list containing tokenized path
 * @input: user input
 * Return: full path if found, else original user input
 */
char *check_path(list_t *list, char *input)
{
	char *full_path;

	full_path = malloc(sizeof(char *) * 1024);
	if (full_path == NULL)
	{
		perror("malloc Error");
		return (NULL);
	}

	while (list != NULL)
	{

		full_path = _strcpy(full_path, list->value);

		full_path = _strcat(full_path, input);
		list = list->next;

		if (file_stat(full_path) == 0)
			return (full_path);

	}
	free(full_path);
	return (input);
}
