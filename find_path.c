#include "shell.h"
/**
 *
 */
list_t *find_path(void)
{
	list_t *head;
	list_t *list;
	char *orig;

/*	char *cpy_path; */
	char *token;

	head = NULL;

/*
	list = malloc(sizeof(list_t) * 10);
	if (list == NULL)
		return (NULL);
*/

	orig = getenv("PATH");
/** check return value */

/*	cpy_path = _strcpy(cpy_path, orig); */
	token = strtok(orig, ":");

	while (token != NULL)
	{
		list = add_node_end(&head, token);
		if (list == NULL)
			return (NULL);

		token = strtok(NULL, ":");
	}

	return (head);
}
