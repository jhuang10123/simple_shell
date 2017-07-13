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

	full_path = malloc(sizeof(char *) * 1024);
	if (full_path == NULL)
	{
		perror("malloc Error");
		return (NULL);
	}

	/* _memset(full_path); */

	while (list != NULL)
	{
		full_path = _strcpy(full_path, list->value);

		full_path = _strcat(full_path, input);

		if (stat(full_path, &sb) == 0)
			return (full_path);

		list = list->next;
	}
	/* free(full_path); */
	return (input);
}
