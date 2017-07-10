#include "shell.h"
/**
 *
 */
int check_path(list_t list, char *input)
{
	char *str;
	int st;

	str = malloc(sizeof(char *) * 10);
	if (str == NULL)
		return (1);

	while (str != NULL)
	{
		str = _strcpy(str, list->value);
		str = _strcat(str, input)
			list = list->next;
	}
	if (stat(str, &st) == 0)
		return (0);
	else
		return (1);
}
