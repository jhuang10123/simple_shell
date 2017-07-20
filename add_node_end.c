#include "shell.h"
/**
 * add_node_end - adds a new node at the end of a listint_t list.
 * @head: pointer to head
 * @value: value in new node
 * Return: head of list
 */
list_t *add_node_end(list_t **head, char *value)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->value = value;
	new->next = NULL;

	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
