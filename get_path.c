#include "shell.h"
/**
 * get_path - tokenize PATH and store values in a linked list
 * Return: head/ pointer to first node of linked list
 */
list_t *get_path(void)
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

			if (list == NULL)
				return (NULL);
		}
		token = strtok(NULL, ":");
	}

	printf("head value = %s\n", head->value);

	list = head;

	return (head);
}
