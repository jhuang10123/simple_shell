#include "shell.h"
/**
 * free_linked - frees a linked list and buffer
 * @head: pointer to first node of list
 * @buffer: buffer/string to free
 */
void free_linked(list_t *head, char *buffer)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(buffer);
}

/**
 * free_2darray - frees a 2d array
 * @array: array to be freed
 */
void free_2darray(char **array)
{
	unsigned int i, j;

	for (i = 0; array[i] != NULL; i++)
		;

	for (j = 0; j < i; j++)
	{
		free(array[j]);
	}
	free(array);
}
