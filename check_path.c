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
	struct stat sb;

	full_path = NULL;

	full_path = malloc(sizeof(char *) * 1024);
	if (full_path == NULL)
		return (NULL);
/*perror*/

	while (list != NULL)
	{
		full_path = _strcpy(full_path, list->value);

		full_path = _strcat(full_path, input);

		if (stat(full_path, &sb) == 0)
			return (full_path);

		list = list->next;
	}
	free(full_path);
	return (input);
}

/**
 * file_stat - check whether file exists
 * @str: string containing full path of a command
 * Return: 0 if file exist, else 1
 */
int file_stat(char *str)
{
	struct stat sb;

	if (stat(str, &sb) == 0)
		return (0);
	else
		return (1);
}
