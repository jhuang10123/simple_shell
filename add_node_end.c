#include "shell.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to head
 * @value: value in new node
 * Return: new node
 */
list_t *add_node_end(list_t **head, char *value)
{
        list_t *new, *temp;

        new = malloc(sizeof(list_t));
        if (new == NULL)
                return (NULL);

        new->value = value;

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
                new->value = value;
                new->next = NULL;
        }
        return (new);
}
