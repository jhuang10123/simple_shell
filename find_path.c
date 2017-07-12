#include "shell.h"
/**
 *
 */
list_t *find_path(void)
{
	list_t *head;
	list_t *list;
	char *orig;
	char *token;

	head = NULL;

	orig = getenv("PATH");
/** check return value */

	token = strtok(orig, ":");

	while (orig != NULL)
	{
		if (token == NULL)
			break;
		else
		{
			list = add_node_end(&head, token);

			printf("token = %s\n", token);

			printf("%s\n\n", list->value);

			if (list == NULL)
				return (NULL);
		}
		token = strtok(NULL, ":");
	}

	printf("head value = %s\n", head->value);

	list = head;

	while (list != NULL)
	{
		printf("list value = %s\n", list->value);
		list = list->next;
	}
	return (head);
}
