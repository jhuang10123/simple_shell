#include "shell.h"
/**
 *
 */
int check_path(list_t *list, char *input)
{
	char *str, *list_val;
	struct stat st;

	str = malloc(sizeof(char *) * 10);
	if (str == NULL)
		return (1);

	list_val = list->value;

	printf("set list value\n");
	while (list != NULL)
	{
		str = _strcpy(str, list_val);
		printf("str after strcpy = %s\n", str);
		str = _strcat(str, input);
		printf("str after strcat = %s\n", str);
		list = list->next;
	}
	if (stat(str, &st) == 0)
	{
		return (0);
		printf("stat: file exists\n");
	}
	else
	{
		printf("file does not exist\n");
		return (1);
	}
}
