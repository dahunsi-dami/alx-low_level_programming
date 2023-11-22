#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes node at given index.
 * @head: a pointer to the head node pointer.
 * @index: index of node that should be deleted, and 0-indexed.
 *
 * Return: 1 if non-fail, else -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *backnode = *head, *nextnode = *head;

	if (index == 0 && *head != NULL)
	{
		*head = (*head)->next;
		free(backnode);
		return (1);
	}
	while (nextnode != NULL)
	{
		if (i == index)
		{
			backnode->next = nextnode->next;
			free(nextnode);
			return (1);
		}
		backnode = nextnode;
		nextnode = nextnode->next;
		i++;
	}
	return (-1);
}
