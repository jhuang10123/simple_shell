#include "shell.h"
/**
 * check_path - concat user input to values of linked list
 * @list: linked list containing tokenized path
 * @input: user input
 * Return: full path if found, else original user input
 */
char *check_path(list_t *list, char *input)
{
	char *str, *full_path;
	struct stat sb;

	str = NULL;
	full_path = NULL;

	str = malloc(sizeof(char *) * 1024);
	if (str == NULL)
		return (NULL);
/*perror*/


	printf("set list value\n");
	while (list != NULL)
	{
/*
		printf ("str after s\
trcpy: %s should = str after strcpy: %s\n", str, list->value);
*/
		str = _strcpy(str, list->value);

		printf ("strcpy\n%s\n%s\n\n", str, list->value\
			);

		full_path = _strcat(str, input);
		printf("path after concat token and input\n %s\n\n", full_path);

		if (stat(str, &sb) == 0)
		{
			printf("stat: file exists\n");
			printf("check_path retval = %s\n", full_path);
			return (full_path);
		}
		list = list->next;
	}
	printf("file does not exist\n");
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
