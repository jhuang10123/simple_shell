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
	if (orig == NULL)
	{
		perror("getenv Error");
		return (NULL);
	}

	token = strtok(orig, ":");

	while (token != NULL)
	{
		list = add_node_end(&head, token);
<<<<<<< HEAD

		if (list == NULL)
			return (NULL);

		token = strtok(NULL, ":");
	}
=======

		if (list == NULL)
			return (NULL);
>>>>>>> e2fb8c5c9c982d8c3dbd41c5ab905c73079779c3

		token = strtok(NULL, ":");
	}
	return (list);
}
