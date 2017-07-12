#include "shell.h"
/**
 *
 */
char *check_path(list_t *list, char *input)
{
	char *str, *full_path;
	struct stat sb;

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
		list = list->next;

		if (stat(str, &sb) == 0)
		{
			printf("stat: file exists\n");
			return (full_path);
		}
	}
	printf("file does not exist\n");
	return (input);
}

/**
 * file_stat - check whether file exists
 */
int file_stat(char *str)
{
	struct stat sb;

	if (stat(str, &sb) == 0)
		return (0);
	else
		return (1);
}
